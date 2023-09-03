#include "./Animal.hpp"
#ifndef CAT_H
#define CAT_H

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal{
    public:
    Cat();
    Cat(std::string type);
    ~Cat();
    Cat (const Cat& original);
    Cat& operator=(const Cat& obj);
    void makeSound() const;
    private:
        Brain *CatBrain;
};

#endif