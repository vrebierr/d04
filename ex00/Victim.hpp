#ifndef VICTIM_H
# define VICTIM_H
# include <iostream>
# include <string>

class Victim {
    public:
        Victim(std::string name);
        Victim(Victim const & victim);
        ~Victim(void);

        virtual void    getPolymorphed() const;
        std::string     getName(void) const;
        void            setName(std::string name);
    private:
        Victim(void);
        std::string     _name;
};

std::ostream &  operator<<(std::ostream & o, Victim const & i);

#endif
