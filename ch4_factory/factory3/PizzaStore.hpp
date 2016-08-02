#pragma once

#include "PizzaIngredientFactory.hpp"
#include "Pizza.hpp" 
#include <memory>

class PizzaStore {
public:
    std::shared_ptr<Pizza> orderPizza(const std::string& type) {
        std::shared_ptr<Pizza> pizza;
        pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        // Other methods are omitted
        return pizza;
    }
    virtual std::shared_ptr<Pizza> createPizza(const std::string& type) = 0;
};

class NYStylePizzaStore : public PizzaStore {
public:
    virtual std::shared_ptr<Pizza> createPizza(const std::string& type) {
        std::shared_ptr<Pizza> pizza;
        // Create a ingredient factory
        std::shared_ptr<PizzaIngredientFactory> ingredientFactory = std::make_shared<NYPizzaIngredientFactory>();
        if (type == "cheese")
            pizza = std::make_shared<CheesePizza>(ingredientFactory);
        // Other Pizzas are omitted
        return pizza;
    }
};
