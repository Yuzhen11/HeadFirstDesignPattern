#pragma once

#include <string>
#include <iostream>

class Beverage {
public:
    std::string description;
    Beverage() {
        description = "Unknown Beverage";
    }
    virtual std::string getDescription() {
        return description;
    }
    virtual double cost() = 0;
    virtual ~Beverage() {}
};

class Espresso : public Beverage {
public:
    Espresso() {
        description = "Espresso";
    }
    ~Espresso() {
        std::cout << "Espresson destructor" << std::endl;
    }
    double cost() {
        return 1.99;
    }
};

class HouseBlend : public Beverage {
public:
    HouseBlend() {
        description = "HouseBlend";
    }
    double cost() {
        return 0.89;
    }
};
