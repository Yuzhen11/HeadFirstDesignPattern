#pragma once
#include <memory>

#include "Duck.hpp"
#include "Turkey.hpp"

class TurkeyAdapter : public Duck {
public:
    TurkeyAdapter(std::shared_ptr<Turkey> _turkey):turkey(_turkey) {}
    virtual void quack() {
        turkey->gobble();
    }
    virtual void fly() {
        for (int  i = 0; i < 5; ++ i)
            turkey->fly();
    }
protected:
    std::shared_ptr<Turkey> turkey;
};
