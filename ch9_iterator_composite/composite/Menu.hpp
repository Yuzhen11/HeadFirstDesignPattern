#pragma once

#include <memory>
#include <vector>
#include <iostream>

class MenuComponent {
public:
    virtual void print() = 0;
    virtual ~MenuComponent() {}
    virtual void add(const std::shared_ptr<MenuComponent>& p) {
        assert(false);
    }
};

// Note: The MenuItem here is different from the one in iterator/
// It represents leaf here
class MenuItem : public MenuComponent {
public:
    MenuItem(const std::string& _name) :name(_name) {}
    virtual void print() {
        std::cout << "MenuItem name: " << name << std::endl;
    }
private:
    std::string name;
};

class Menu : public MenuComponent {
public:
    Menu(const std::string& _name) :name(_name) {}
    void add(const std::shared_ptr<MenuComponent>& p) {
        menuComponents.push_back(p);
    }
    virtual void print() {
        std::cout << "Menu: " << name << std::endl;
        for (auto menuComponent : menuComponents) {
            menuComponent->print();
        }
    }
private:
    std::vector<std::shared_ptr<MenuComponent>> menuComponents;
    std::string name;
};
