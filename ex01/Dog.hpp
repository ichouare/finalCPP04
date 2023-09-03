#ifndef DOG_H
#define DOG_H

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        Dog (const Dog& original);
        Dog& operator=(const Dog& obj);
        void makeSound() const;
    private:
        Brain *DogBrain;
};

#endif