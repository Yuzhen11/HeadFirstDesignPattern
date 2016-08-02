#pragma once

#include <iostream>
#include <vector>

class Pizza {
public:
    std::string name, dough, sauce;
    std::vector<std::string> toppings;
    void prepare() {
        for (int i = 0; i < toppings.size(); ++ i)
            std::cout << "Adding toppings: " + toppings[i] << std::endl;
    }
    void bake() {
        std::cout << "baking" << std::endl;
    }
    void cut() {
        std::cout << "cutting" << std::endl;
    }
    void box() {
        std::cout << "boxing" << std::endl;
    }
};

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza() {
        toppings.push_back("NYNYNY");
    }
};

class NYStyleVeggiePizza : public Pizza {
};

class NYStyleClamPizza : public Pizza {
};

class NYStylePepperoniPizza : public Pizza {
};

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() {
        toppings.push_back("ChicagoChicago");
    }
};

class ChicagoStyleVeggiePizza : public Pizza {
};

class ChicagoStyleClamPizza : public Pizza {
};

class ChicagoStylePepperoniPizza : public Pizza {
};
