#include "./WrongCat.hpp"


WrongCat::WrongCat()
{
    this->type = "WrongCat";
     std::cout << "Constructors of WrongCat called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "destructor of WrongCat called" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
    this->type = type;
    std::cout << "Parameterized constrctor  of WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& original)
{
    (*this) = original;
}


WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    this->type = obj.type;
    return (*this);
}


void WrongCat::makeSound() const
{
    std::cout<< "moew" << std::endl;
}