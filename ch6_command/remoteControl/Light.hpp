#pragma once

#include <iostream>

class Light {
public:
    void on() {
        std::cout << "The light is on" << std::endl;
    }
    void off() {
        std::cout << "The light is off" << std::endl;
    }
};
