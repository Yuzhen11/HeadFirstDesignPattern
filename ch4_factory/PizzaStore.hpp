# pragma once

#include "Pizza.hpp"
#include "SimplePizzaFactory.hpp"

class PizzaStore {
public:
    std::shared_ptr<SimplePizzaFactory> factory;

    PizzaStore(std::shared_ptr<SimplePizzaFactory> _factory):factory(_factory) {}

    std::shared_ptr<Pizza> orderPizza(const std::string& type) {
        std::shared_ptr<Pizza> pizza;
        pizza = factory->createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
};
