#pragma once

#include <memory>
#include <iostream>

#include "Iterator.hpp"
#include "Menu.hpp"

class Waitress {
public:
    Waitress(const std::shared_ptr<DinerMenu>& _dinerMenu, const std::shared_ptr<PancakeMenu>& _pancakeMenu)
        :dinerMenu(_dinerMenu), pancakeMenu(_pancakeMenu) {}
    void printMenu() {
        // DinerMenuIterator
        std::shared_ptr<Iterator> dinerIterator = dinerMenu->createIterator();
        std::cout << "printing diner menu" << std::endl;
        printMenu(dinerIterator);

        // PancakeMenuIterator
        std::shared_ptr<Iterator> pancakeIterator = pancakeMenu->createIterator();
        std::cout << "printing pancake menu" << std::endl;
        printMenu(pancakeIterator);
    }
private:
    void printMenu(const std::shared_ptr<Iterator>& iterator) {
        while (iterator->hasNext()) {
            // Need to use dynamic_pointer_cast to cast baseclass to subclass
            std::shared_ptr<MenuItem> menuItem = std::dynamic_pointer_cast<MenuItem>(iterator->next());
            std::cout << menuItem->getName() << std::endl;
        }
    }
    std::shared_ptr<DinerMenu> dinerMenu;
    std::shared_ptr<PancakeMenu> pancakeMenu;
};
