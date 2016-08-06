#pragma once

#include <iostream>

class CaffeineBeverage {
public:
    void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    void boilWater() {
        std::cout << "Boiling water" << std::endl;
    }

    void pourInCup() {
        std::cout << "Pouring into cup" << std::endl;
    }
};

class Tea : public CaffeineBeverage {
public:
    virtual void brew() {
        std::cout << "Steeping the tea" << std::endl;
    }
    virtual void addCondiments() {
        std::cout << "Adding Lemon" << std::endl;
    }
};

class Coffee: public CaffeineBeverage {
public:
    virtual void brew() {
        std::cout << "Dripping Coffee through filter" << std::endl;
    }
    virtual void addCondiments() {
        std::cout << "Adding sugar and milk" << std::endl;
    }
};
