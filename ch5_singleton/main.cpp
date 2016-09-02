#include <iostream>
#include <thread>
#include <vector>
#include "Singleton.hpp"

int main() {
    // SimpleSingleton * uniqueInstance = SimpleSingleton::getInstance();
    // uniqueInstance = SimpleSingleton::getInstance();

    std::vector<std::thread> v;
    for (int i = 0; i < 10; ++ i) {
        v.push_back(std::thread([](){
            // 1.
            // Use SimpleSingleton may create thread-safe problem
            // SimpleSingleton * uniqueInstance = SimpleSingleton::getInstance();
            
            // 2.
            // Use double-checked locking
            // Singleton * uniqueInstance = Singleton::getInstance();
            
            // 3.
            // C++ style, in c++11, the initialization will be thread-safe
            Singleton2 * uniqueInstance = Singleton2::getInstance();
        }));
    }
    for (auto & th : v)
        th.join();

    return 0;
}
