#include "./Dog.hpp"
#include "./Brain.hpp"


Dog::Dog()
{
    this->type = "Dog";
    DogBrain = new Brain();
     std::cout << "Constructors of Dog called" << std::endl;
}

Dog::Dog(std::string type)
{
    this->type = type;
    DogBrain = new Brain();
    std::cout << " Parameterized Constructors of Dog called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "destructor of Dog called" << std::endl;
   delete DogBrain;
}

Dog::Dog(const Dog& original)
{
    DogBrain = NULL;
    std::cout << "copy constructor Dog called" << std::endl;
    (*this) = original;
}



Dog& Dog::operator=(const Dog& obj) 
{
    std::cout << "assignement operator Dog called" << std::endl;
    if((this) == &obj)
        return *(this);
    this->type = obj.type;
    delete DogBrain;
    DogBrain = new Brain(*obj.DogBrain);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

