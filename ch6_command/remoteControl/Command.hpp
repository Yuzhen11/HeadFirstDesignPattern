#pragma once

#include <memory>

#include "Light.hpp"

class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() {}
};

class LightOnCommand : public Command {
public:
    LightOnCommand(std::shared_ptr<Light> _light): light(light) {}
    virtual void execute() {
        light->on();
    }
private:
    std::shared_ptr<Light> light;
};

class LightOffCommand : public Command {
public:
    LightOffCommand(std::shared_ptr<Light> _light): light(light) {}
    virtual void execute() {
        light->off();
    }
private:
    std::shared_ptr<Light> light;
};

class NoCommand : public Command {
public:
    virtual void execute() {}
};
