#include "./Dog.hpp"


Dog::Dog()
{
    this->type = "dDog";
     std::cout << "Constructors of Dog called" << std::endl;
}

Dog::Dog(std::string type)
{
        this->type = type;
     std::cout << " Parameterized Constructors of Dog called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "destructor of Dog called" << std::endl;
}

Dog::Dog(const Dog& original)
{
    (*this) = original;
}


Dog& Dog::operator=(const Dog& obj) 
{
    this->type = obj.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

