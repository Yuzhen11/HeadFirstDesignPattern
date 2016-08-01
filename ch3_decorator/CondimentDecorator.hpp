#pragma once

#include "Beverage.hpp"

#include <string>
#include <memory>
#include <iostream>

class CondimentDecorator : public Beverage {
public:
    std::string getDescription() = 0;
};

class Mocha : public CondimentDecorator {
public:
    // Beverage * beverage;
    //
    // Mocha(Beverage* _beverage):beverage(_beverage) {}

    std::shared_ptr<Beverage> beverage;

    Mocha(std::shared_ptr<Beverage> _beverage):beverage(_beverage) {}

    ~Mocha() {
        std::cout << "Mocha destructor" << std::endl;
    }

    std::string getDescription() {
        return beverage->getDescription() + ", Mocha";
    }

    double cost() {
        return 0.20 + beverage->cost();
    }
};
