#include "Victim.hpp"

Victim::Victim(void) {

}

Victim::Victim(std::string name) {
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & victim) {
    *this = victim;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->getName() << " just died for no apparent reason !" << std::endl;
}

void Victim::getPolymorphed(void) const {
    std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;

}

std::string Victim::getName(void) const {
    return this->_name;
}

void Victim::setName(std::string name) {
    this->_name = name;
}

std::ostream &  operator<<(std::ostream & o, Victim const & i) {
    o << "I'm " << i.getName() << " and i like otters !" << std::endl;
    return o;
}
