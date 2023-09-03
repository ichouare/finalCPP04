#include "./AMateria.hpp"



AMateria::AMateria(std::string const &type):type(type)
{
    std::cout << "constructor  parametized of AMateria called" << std::endl;
}

AMateria::AMateria():type("undefine")
{
    std::cout << "default constructor  of AMateria called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return type;
}



AMateria::~AMateria()
{
    std::cout << "destructor of AMateria called" << std::endl;
}


AMateria::AMateria(AMateria const &original)
{
    (*this) = original;
}

AMateria& AMateria::operator=(AMateria const &original)
{
    if(this == &original)
        return (*this);
    this->type = original.type;
    return (*this);
}
void AMateria::use(ICharacter& target)
{
    std::cout << target.getName() << std::endl;
}