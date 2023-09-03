#include "./Animal.hpp"


Animal::Animal():type("any_anamil")
{
    std::cout << "default constructor  animal called" << std::endl;
}

Animal::Animal(std::string type):type(type)
{
    std::cout << "Parameterized  constructor  animal called" << std::endl;
}


Animal::~Animal()
{
     std::cout << "destructor  animal called" << std::endl;
}

Animal::Animal(const Animal& originale)
{
    *this = originale;
}

Animal& Animal::operator=(const Animal& obj)
{
    this->type = obj.type;
    return(*this);
}

std::string Animal::getType() const 
{
    return type;
}

void Animal::setType(const std::string type)
{
    this->type = type;
}


void Animal::makeSound() const
{
    // std::cout << "not sound to make" << std::endl;
}