#pragma once

#include <memory>

// Ingredients
class Dough {
public:
    virtual ~Dough() {} 
};

class ThickCrustDough : public Dough {
public:
};

class ThinCrustDough : public Dough {
public:
};

// Other ingredients are omitted

class PizzaIngredientFactory {
public:
    virtual std::shared_ptr<Dough> createDough() = 0;
    // Other ingredients are omitted here.  
    // Sauce, Cheese, Veggies...
};

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    virtual std::shared_ptr<Dough> createDough() {
        return std::make_shared<ThinCrustDough>();
    }
};
