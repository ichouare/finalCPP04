#ifndef AMATERIA_H
#define AMATERIA_H


#include <iostream>
#include <string>
#include "./ICharacter.hpp"

class ICharacter;
class AMateria
{
protected:
    std::string type;
public:
    AMateria(std::string const & type);
    AMateria();
    AMateria(AMateria const & original);
    AMateria& operator=(AMateria const & original);
    virtual ~AMateria();

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif