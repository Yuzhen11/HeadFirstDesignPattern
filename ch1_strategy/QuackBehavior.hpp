#pragma once
#include <iostream>

// interface class
class QuackBehavior {
public:
    virtual void quack() const = 0;
    virtual ~QuackBehavior() {};
};

// Implement the interface here instead of using new files
class Quack : public QuackBehavior {
public:
    virtual void quack() const {
        std::cout << "Quack..." << std::endl;
    }
    virtual ~Quack() {
        std::cout << "Destructing Quack" << std::endl;
    }
};

class MuteQuack : public QuackBehavior {
public:
    virtual void quack() const {
        std::cout << "<Silence>" << std::endl;
    }
    virtual ~MuteQuack() {
        std::cout << "Destructing MuteQuack" << std::endl;
    }
};

class Squeak : public QuackBehavior {
public:
    virtual void quack() const {
        std::cout << "Squeak" << std::endl;
    }
    virtual ~Squeak() {
        std::cout << "Destructing Squeak" << std::endl;
    }
};
