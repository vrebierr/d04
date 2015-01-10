#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & peon) : Victim(peon){
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const {
    std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}
