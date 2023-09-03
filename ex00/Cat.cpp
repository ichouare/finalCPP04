#include "./Cat.hpp"


Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Constructors of Cat called" << std::endl;
}



Cat::~Cat()
{
    std::cout << "destructor of Cat called" << std::endl;
}

Cat::Cat(const Cat& original)
{
    (*this) = original;
}


Cat& Cat::operator=(const Cat& obj)
{
    this->type = obj.type;
    return (*this);
}


void Cat::makeSound() const
{
    std::cout<< "moew" << std::endl;
}

