#pragma once

#include "Observer.hpp"
#include "Subject.hpp"

// CurrentConditionsDisplay implements Observer and DisplayElement
class CurrentConditionsDisplay : public Observer, public DisplayElement {
public:
    CurrentConditionsDisplay(Subject * _subject): subject(_subject) {
        subject->registerObserver(this);
    }
    virtual void update(float _temp, float _humidity, float _pressure) {
        temperature = _temp;
        humidity = _humidity;
        display();
    }
    virtual void display() {
        std::cout << "Current conditions: " << temperature << "F degree and " << humidity << "% humidity" << std::endl;
    }
private:
    float temperature;
    float humidity;
    Subject * subject;
};
