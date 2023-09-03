#include "./WrongAnimal.hpp"


WrongAnimal::WrongAnimal():type("any_anamil")
{
    std::cout << "default constructor  Wronganimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type)
{
    std::cout << "Parameterized  constructor  Wronganimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
     std::cout << "destructor  Wronganimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& originale)
{
    *this = originale;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    this->type = obj.type;
    return(*this);
}

std::string WrongAnimal::getType() const 
{
    return type;
}

void WrongAnimal::setType(const std::string type)
{
    this->type = type;
}


void WrongAnimal::makeSound() const
{

}