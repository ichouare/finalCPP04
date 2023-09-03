#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
    public:
        Animal();
        Animal(std::string type); 
        virtual ~Animal();
        Animal (const Animal& originle);
        Animal& operator=(const Animal& obj);
        std::string getType() const;
        void setType(const std::string type);
        virtual void makeSound() const;
    protected:
        std::string type;
};

#endif