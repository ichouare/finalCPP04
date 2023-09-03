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
        void virtual makeSound() const = 0;
    protected:
        std::string type;
};

#endif