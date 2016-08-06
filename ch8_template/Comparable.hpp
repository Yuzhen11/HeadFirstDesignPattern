#pragma once

#include <memory>

class Comparable {
public:
    virtual bool compareTo(Comparable *) = 0;
    virtual ~Comparable() {}

    // Just for print
    virtual void print() = 0;
};
