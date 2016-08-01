#include "Beverage.hpp"
#include "CondimentDecorator.hpp"

#include <iostream>
#include <memory>

int main() {
    // Beverage * beverage = new Espresso();
    // std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;
    //
    // Beverage * beverage2 = new Espresso();
    // Beverage * beverage3 = new Mocha(beverage2);
    // std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;
    
    {
        std::shared_ptr<Beverage> beverage = std::make_shared<Espresso>();
        std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;
    }

    std::cout << "----" << std::endl;
    {
        std::shared_ptr<Beverage> beverage2 = std::make_shared<Espresso>();
        std::shared_ptr<Beverage> beverage3 = std::make_shared<Mocha>(beverage2);
        std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;
    }

}
