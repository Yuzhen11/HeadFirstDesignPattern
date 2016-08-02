# pragma once

#include "Pizza.hpp"

#include <memory>

class PizzaStore {
public:
    std::shared_ptr<Pizza> orderPizza(const std::string& type) {
        std::shared_ptr<Pizza> pizza;
        pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
    virtual std::shared_ptr<Pizza> createPizza(const std::string& type) = 0;
};

class NYStylePizzaStore : public PizzaStore {
public:
    virtual std::shared_ptr<Pizza> createPizza(const std::string& type) {
        std::shared_ptr<Pizza> pizza;
        if (type == "cheese")
            pizza = std::make_shared<NYStyleCheesePizza>();
        else if (type == "pepperoni")
            pizza = std::make_shared<NYStylePepperoniPizza>();
        else if (type == "clam")
            pizza = std::make_shared<NYStyleClamPizza>();
        else if (type == "veggie")
            pizza = std::make_shared<NYStyleVeggiePizza>();
        return pizza;
    }
};

class ChicagoStylePizzaStore : public PizzaStore {
public:
    virtual std::shared_ptr<Pizza> createPizza(const std::string& type) {
        std::shared_ptr<Pizza> pizza;
        if (type == "cheese")
            pizza = std::make_shared<ChicagoStyleCheesePizza>();
        else if (type == "pepperoni")
            pizza = std::make_shared<ChicagoStylePepperoniPizza>();
        else if (type == "clam")
            pizza = std::make_shared<ChicagoStyleClamPizza>();
        else if (type == "veggie")
            pizza = std::make_shared<ChicagoStyleVeggiePizza>();
        return pizza;
    }
};
