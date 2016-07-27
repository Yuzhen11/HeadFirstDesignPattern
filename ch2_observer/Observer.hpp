#pragma once

// interface class
class Observer {
public:
    virtual void update(float temp, float humidity, float pressure) = 0;
    virtual ~Observer() {}
};

// interface class
// DisplayElement is not that important, so I just put it here...
class DisplayElement {
public:
    virtual void display() = 0;
    virtual ~DisplayElement() {}
};

