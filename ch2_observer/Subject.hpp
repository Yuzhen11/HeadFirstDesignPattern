#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

#include "Observer.hpp"

// interface class
class Subject {
public:
    virtual void registerObserver(Observer * o) = 0;
    virtual void removeObserver(Observer * o) = 0;
    virtual void notifyObservers() = 0;
};

class WeatherData : public Subject {
public:
    WeatherData() {}
    virtual void registerObserver(Observer * o) {
        observers.push_back(o);
    }
    virtual void removeObserver(Observer * o) {
        std::vector<Observer*>::iterator it = std::find(observers.begin(), observers.end(), o);
        if (it != observers.end())
            observers.erase(it);
    }
    virtual void notifyObservers() {
        for (int i = 0; i < observers.size(); ++ i) {
            observers[i]->update(temperature, humidity, pressure);
        }
    }
    void measurementsChanged() {
        notifyObservers();
    }
    void setMeasurements(float _temperature, float _humidity, float _pressure) {
        temperature = _temperature;
        humidity = _humidity;
        pressure = _pressure;
        measurementsChanged();
    }
private:
    // Use std::vector for simplicity
    std::vector<Observer *> observers;
    float temperature;
    float humidity;
    float pressure;
};
