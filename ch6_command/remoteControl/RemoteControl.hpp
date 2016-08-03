#pragma once

#include "Command.hpp"

#include <iostream>
#include <memory>
#include <vector>

class RemoteControl {
public:
    RemoteControl() {
        onCommands.resize(7);
        offCommands.resize(7);
        for (int i = 0; i < 7; ++ i) {
            onCommands[i] = std::make_shared<NoCommand>();
            offCommands[i] = std::make_shared<NoCommand>();
        }
    }
    void setCommand(int slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand) {
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }
    void onButtonWasPushed(int slot) {
        onCommands[slot]->execute();
    }
    void offButtonWasPushed(int slot) {
        offCommands[slot]->execute();
    }
private:
    std::vector<std::shared_ptr<Command>> onCommands;
    std::vector<std::shared_ptr<Command>> offCommands;
};
