#pragma once
#include <iostream>

class Turkey {
public:
    virtual void gobble() = 0;
    virtual void fly() = 0;
};

class WildTurkey : public Turkey {
public:
    virtual void gobble() {
        std::cout <<"Gobble gobble" << std::endl;
    }
    virtual void fly() {
        std::cout << "I'm flying a short distance" << std::endl;
    }
};
