#pragma once

#include <memory>
#include <vector>
#include "MenuItem.hpp"

class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual std::shared_ptr<BaseObject> next() = 0;
    virtual ~Iterator() {}
};

// DinerMenuIterator also implemented here
class DinerMenuIterator : public Iterator {
public:
    DinerMenuIterator(std::shared_ptr<std::shared_ptr<MenuItem>>* _items, int& _numberOfItems):
        items(_items), numberOfItems(_numberOfItems) {}
    virtual std::shared_ptr<BaseObject> next() {
        std::shared_ptr<BaseObject> p = items->get()[position];
        position += 1;
        return p;
    }
    virtual bool hasNext() {
        if (position >= numberOfItems)
            return false;
        else
            return true;
    }
private:
    int position = 0;
    int& numberOfItems;
    std::shared_ptr<std::shared_ptr<MenuItem>> *items;
};

// PancakeMenuIterator 
class PancakeMenuIterator : public Iterator {
public:
    PancakeMenuIterator(std::vector<std::shared_ptr<MenuItem>>* _items):
        items(_items){}
    virtual std::shared_ptr<BaseObject> next() {
        std::shared_ptr<BaseObject> p = (*items)[position];
        position += 1;
        return p;
    }
    virtual bool hasNext() {
        if (position >= items->size())
            return false;
        else 
            return true;
    }
private:
    int position = 0;
    std::vector<std::shared_ptr<MenuItem>>* items;
};
