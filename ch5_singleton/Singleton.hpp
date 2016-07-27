#pragma once

#include <mutex>

// Simple Singleton, not thread safe
class SimpleSingleton {
public:
    static SimpleSingleton * getInstance() {
        if (uniqueInstance == nullptr)
            uniqueInstance = new SimpleSingleton();
        return uniqueInstance;
    }
private:
    // Constructor is private
    SimpleSingleton() { std::cout << "SimpleSingleton created." <<std::endl;}
    static SimpleSingleton * uniqueInstance;
};
SimpleSingleton * SimpleSingleton::uniqueInstance = nullptr;


// Singleton, thread safe
class Singleton {
public:
    static Singleton * getInstance() {
        // double-checked locking
        if (uniqueInstance == nullptr) {
            std::lock_guard<std::mutex> lock(singleton_mutex);
            if (uniqueInstance == nullptr) {
                uniqueInstance = new Singleton();
            }
        }
        return uniqueInstance;
    }
private:
    // Constructor is private
    Singleton() { std::cout << "Singleton created." <<std::endl;}
    static Singleton * uniqueInstance;
    static std::mutex singleton_mutex;
};
Singleton * Singleton::uniqueInstance = nullptr;
std::mutex Singleton::singleton_mutex;
