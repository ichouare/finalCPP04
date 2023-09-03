#include "./Cat.hpp"


Cat::Cat()
{
    this->type = "Cat";
    CatBrain = new Brain();
    std::cout << "Constructors of Cat called" << std::endl;
}

Cat::Cat(std::string type)
{
    this->type = type;
    CatBrain = new Brain();
     std::cout << " Parameterized Constructors of Cat called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "destructor of Cat called" << std::endl;
     delete CatBrain;
}

Cat::Cat(const Cat& original)
{
    CatBrain = NULL;
    std::cout << "copy constructor cat called" << std::endl;
    (*this) = original;
}


Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "assignement operator Dog called" << std::endl;
    if((this) == &obj)
        return *(this);
    this->type = obj.type;
    delete CatBrain;
    CatBrain = new Brain(*obj.CatBrain);
    return (*this);

}


void Cat::makeSound() const
{
    std::cout<< "moew" << std::endl;
}

