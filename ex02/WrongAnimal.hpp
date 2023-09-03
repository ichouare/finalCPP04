#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H


#include <iostream>

class WrongAnimal {
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        ~WrongAnimal();
        WrongAnimal (const WrongAnimal& originle);
        WrongAnimal& operator=(const WrongAnimal& obj);
        std::string getType() const;
        void setType(const std::string type);
        void makeSound() const;
    protected:
        std::string type;
};


#endif