#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {

}

Sorcerer::Sorcerer(std::string name, std::string title) {
    this->_name = name;
    this->_title = title;
    std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & sorcerer) {
    *this = sorcerer;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

void Sorcerer::polymorph(Victim const & target) const {
    target.getPolymorphed();
}

std::string Sorcerer::getName(void) const {
    return this->_name;
}

void Sorcerer::setName(std::string name) {
    this->_name = name;
}

std::string Sorcerer::getTitle(void) const {
    return this->_title;
}

void Sorcerer::setTitle(std::string title) {
    this->_title = title;
}

std::ostream &  operator<<(std::ostream & o, Sorcerer const & i) {
    o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}
