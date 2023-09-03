#ifndef ICE_H
#define ICE_H


#include "./AMateria.hpp"
class Ice : public  AMateria
{
public:
    Ice();
    ~Ice();
    Ice(const Ice& original);
    Ice& operator=(const Ice& original);
    Ice* clone() const;
    void use(ICharacter& target);
};

#endif