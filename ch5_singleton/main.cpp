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
            Singleton * uniqueInstance = Singleton::getInstance();
            
            // Use SimpleSingleton may create thread-safe problem
            // SimpleSingleton * uniqueInstance = SimpleSingleton::getInstance();
        }));
    }
    for (auto & th : v)
        th.join();

    return 0;
}
