#ifndef SORCERER_H
# define SORCERER_H
# include "Victim.hpp"
# include <iostream>
# include <string>

class Sorcerer {
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & sorcerer);
        ~Sorcerer(void);

        void            polymorph(Victim const & target) const;
        std::string     getName(void) const;
        void            setName(std::string name);
        std::string     getTitle(void) const;
        void            setTitle(std::string name);
    private:
        Sorcerer(void);
        std::string     _name;
        std::string     _title;
};

std::ostream &  operator<<(std::ostream & o, Sorcerer const & i);

#endif
