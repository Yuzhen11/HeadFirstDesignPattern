#pragma once
#include <iostream>

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

class Duck {
public:
    Duck(FlyBehavior * _flyBehaivor, QuackBehavior * _quackBehavior):
        flyBehavior(_flyBehaivor), quackBehavior(_quackBehavior){}
    virtual ~Duck() {
        // I am responsible to free the memory...
        delete flyBehavior;
        delete quackBehavior;
    }
    void performFly() {
        flyBehavior->fly();
    }
    void performQuack() {
        quackBehavior->quack();
    }
    void swim() {
        std::cout << "All ducks float, even decoys!" << std::endl;
    }
    // How about make the Duck class abstract class
    virtual void display() = 0;
protected:
    FlyBehavior * flyBehavior;
    QuackBehavior * quackBehavior;
};

// Put the acutual ducks here
class MallardDuck : public Duck {
public:
    MallardDuck():Duck(new FlyWithWings(), new Quack()) {
    }
    virtual ~MallardDuck() {
    }
    virtual void display() {
        std::cout << "I am a real Mallard duck" << std::endl;
    }
};
