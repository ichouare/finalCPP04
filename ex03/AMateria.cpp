#include "./AMateria.hpp"



AMateria::AMateria(std::string const &type):type(type)
{
    
}

AMateria::AMateria():type("undefine")
{

}

std::string const & AMateria::getType() const
{
    return type;
}



AMateria::~AMateria()
{

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