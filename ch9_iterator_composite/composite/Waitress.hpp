#pragma once

#include "Menu.hpp"
#include <memory>

class Waitress {
public:
    Waitress(const std::shared_ptr<MenuComponent> _allMenus) :allMenus(_allMenus) {}
    void printMenu() {
        allMenus->print();
    }
private:
    std::shared_ptr<MenuComponent> allMenus;
};
