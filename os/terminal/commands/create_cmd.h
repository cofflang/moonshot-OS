#include "command.h"

class CreateCommand : public Command {
public:
    CreateCommand(TargetType tt, std::string n) : Command(tt, n) {}
    bool execute() override {
        switch(target_type) {
            case TargetType::T_FILE:
                std::cout << "successfully created file: " + name << std::endl;
                break;
            case TargetType::T_DIRECTORY:
                std::cout << "successfully created dir: " + name << std::endl;
                break;
        }
        return true;
    }
};