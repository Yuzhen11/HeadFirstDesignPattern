#pragma once

#include "PizzaIngredientFactory.hpp"

#include <memory>
#include <iostream>

class Pizza {
public:
    std::string name;
    std::shared_ptr<Dough> dough;
    // Other ingredients are omitted
    
    virtual void prepare() = 0;

    void bake() {
        std::cout << "baking" << std::endl;
    }
    // Other methods are omitted
};

class CheesePizza : public Pizza {
public:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory;

    CheesePizza(std::shared_ptr<PizzaIngredientFactory> _ingredientFactory)
        :ingredientFactory(_ingredientFactory) {}

    virtual void prepare() {
        std::cout << "preparing cheese pizza" << std::endl;
        dough = ingredientFactory->createDough();
        // Other ingredients are omitted
    }
};
