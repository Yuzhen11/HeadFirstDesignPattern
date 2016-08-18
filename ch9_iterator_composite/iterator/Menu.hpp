#pragma once

#include <memory>
#include <vector>

#include "Iterator.hpp"
#include "MenuItem.hpp"

class DinerMenu {
public:
    DinerMenu()
        : menuItems(new std::shared_ptr<MenuItem>[MAX_ITEMS], std::default_delete<std::shared_ptr<MenuItem>[]>()){
        addItem("Hotdog");
        addItem("Soup");
    }
    void addItem(const std::string& name) {
        assert(numberOfItems < MAX_ITEMS);
        menuItems.get()[numberOfItems] = std::make_shared<MenuItem>(name);
        numberOfItems += 1;
    }
    std::shared_ptr<Iterator> createIterator() {
        return std::shared_ptr<Iterator>(new DinerMenuIterator(&menuItems, numberOfItems));
    }
private:
    static const int MAX_ITEMS = 6;
    int numberOfItems = 0;
    // This shared_ptr to shared_ptr is to store the menuItems
    // The first shared_ptr points to a fixed length array
    // Each element is created using shared_ptr
   std::shared_ptr<std::shared_ptr<MenuItem>> menuItems;
};

class PancakeMenu {
public:
    PancakeMenu() {
        addItem("Pancakes");
        addItem("Waffles");
    }
    void addItem(const std::string& name) {
        menuItems.push_back(std::make_shared<MenuItem>(name));
    }
    std::shared_ptr<Iterator> createIterator() {
        return std::shared_ptr<Iterator>(new PancakeMenuIterator(&menuItems));
    }
private:
    std::vector<std::shared_ptr<MenuItem>> menuItems;
};
