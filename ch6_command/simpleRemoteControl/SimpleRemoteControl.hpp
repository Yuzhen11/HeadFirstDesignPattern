#pragma once

#include <memory>

#include "Command.hpp"
#include "Light.hpp"

class SimpleRemoteControl {
public:
    void setCommand(std::shared_ptr<Command> _command) {
        slot = _command;
    }
    void buttonWasPressed() {
        slot->execute();
    }
private:
    std::shared_ptr<Command> slot;
    
};
