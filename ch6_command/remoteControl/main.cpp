#include <memory>
#include "RemoteControl.hpp"

int main() {
    RemoteControl remote_control;
    // Define a light
    std::shared_ptr<Light> light = std::make_shared<Light>();
    // Define commands
    std::shared_ptr<Command> onCommand = std::make_shared<LightOnCommand>(light);
    std::shared_ptr<Command> offCommand = std::make_shared<LightOffCommand>(light);

    remote_control.setCommand(1, onCommand, offCommand);

    remote_control.onButtonWasPushed(3);
    remote_control.onButtonWasPushed(1);
    remote_control.offButtonWasPushed(1);
}
