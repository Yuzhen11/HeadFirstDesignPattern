#pragma once

#include <iostream>

class CaffeineBeverage {
public:
    void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();
        if (customerWantsCodiments())
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

    virtual bool customerWantsCodiments() {
        return true;
    }
};

class CoffeeWithHook : public CaffeineBeverage {
public:
    virtual void brew() {
        std::cout << "Dripping Coffee through filter" << std::endl;
    }
    virtual void addCondiments() {
        std::cout << "Adding sugar and milk" << std::endl;
    }

    virtual bool customerWantsCodiments() {
        std::cout << "Do you need condiments? y/n" << std::endl;
        char c;
        std::cin >> c;
        if (c == 'y')
            return true;
        else 
            return false;
    }
};
