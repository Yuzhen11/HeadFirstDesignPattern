#pragma once

#include "Pizza.hpp"

#include <string>
#include <memory>

class SimplePizzaFactory {
public:
    std::shared_ptr<Pizza> createPizza(const std::string& type) {
        std::shared_ptr<Pizza> pizza;
        if (type == "cheese")
            pizza = std::make_shared<CheesePizza>();
        else if (type == "pepperoni")
            pizza = std::make_shared<PepperoniPizza>();
        else if (type == "clam")
            pizza = std::make_shared<ClamPizza>();
        else if (type == "veggie")
            pizza = std::make_shared<VeggiePizza>();
        return pizza;
    }
    ~SimplePizzaFactory() {
        std::cout << "SimplePizzaFactory destructor" << std::endl;
    }
};
