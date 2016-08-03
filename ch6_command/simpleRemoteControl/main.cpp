#include <memory>
#include "SimpleRemoteControl.hpp"

int main() {
    SimpleRemoteControl remote_control;
    // Define a light
    std::shared_ptr<Light> light = std::make_shared<Light>();
    // Define a command
    std::shared_ptr<Command> command = std::make_shared<LightOnCommand>(light);

    remote_control.setCommand(command);
    remote_control.buttonWasPressed();
}
