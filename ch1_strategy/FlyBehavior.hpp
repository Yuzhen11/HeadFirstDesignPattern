#pragma once
#include <iostream>

// interface class
class FlyBehavior {
public:
    virtual void fly() const = 0;
    virtual ~FlyBehavior() {};
};


// Implement the interface here instead of using new files
class FlyWithWings : public FlyBehavior {
public:
    virtual void fly() const {
        std::cout << "I'm flying with wings" << std::endl;
    }
    virtual ~FlyWithWings() {
        std::cout << "Destructing FlyWithWings" << std::endl;
    }
};

class FlyNoWay : public FlyBehavior {
public:
    virtual void fly() const {
        std::cout << "I can't fly" << std::endl;
    }
    virtual ~FlyNoWay() {
        std::cout << "Destructing FlyNoWay" << std::endl;
    }
};
