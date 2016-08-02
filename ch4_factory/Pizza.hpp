#pragma once

#include <iostream>

class Pizza {
public:
    virtual void prepare() {
        std::cout << "preparing" << std::endl;
    }
    virtual void bake() {
        std::cout << "baking" << std::endl;
    }
    virtual void cut() {
        std::cout << "cutting" << std::endl;
    }
    virtual void box() {
        std::cout << "boxing" << std::endl;
    }
};

class CheesePizza : public Pizza {
};

class VeggiePizza : public Pizza {
};

class ClamPizza : public Pizza {
};

class PepperoniPizza : public Pizza {
};
