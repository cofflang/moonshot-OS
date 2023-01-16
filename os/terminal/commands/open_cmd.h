#include "command.h"

class OpenCommand : public Command {
public:
    OpenCommand(TargetType tt, std::string n) : Command(tt, n) {}
    bool execute() override {
        switch(target_type) {
            case TargetType::T_FILE:
                std::cout << "successfully opened file: " + name << std::endl;
                break;
            case TargetType::T_DIRECTORY:
                std::cout << "successfully opened dir: " + name << std::endl;
                break;
        }
        return true;
    }
};