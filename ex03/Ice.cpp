#include "./Ice.hpp"


Ice::Ice():AMateria("ice")
{
    std::cout << "default constructor of Ice called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "destructor  of Ice called" << std::endl;
}

Ice::Ice(const Ice& original):AMateria("ice")
{
    (*this) = original;
}

Ice& Ice::operator=(const Ice& original)
{
    if(this == &original)
        return(*this);
    type = original.type;
    return (*this);
}


Ice* Ice::clone() const 
{
    Ice *Base =  new Ice();
    return Base;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() + "*" << std::endl;
}
