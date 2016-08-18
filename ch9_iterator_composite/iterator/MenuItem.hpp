#pragma once
#include <string>

class BaseObject {
public:
    virtual ~BaseObject(){}
};

class MenuItem : public BaseObject {
public:
    MenuItem() = default;
    MenuItem(const std::string& _name):name(_name) {}
    std::string getName() {
        return name;
    }
private:
    std::string name;
};
