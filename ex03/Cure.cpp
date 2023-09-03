#include "./Cure.hpp"


Cure::Cure():AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const Cure& original)
{
    (*this) = original;
}

Cure& Cure::operator=(const Cure& original)
{
    if(this == &original)
        return(*this);
    type = original.type;
    return (*this);
}


Cure* Cure::clone() const 
{
    Cure *Base =  new Cure();
    return Base;
}

void Cure::use(ICharacter& target)
{
   std::cout << "* heals " << target.getName() + "'s " << "wounds *" << std::endl;
}


