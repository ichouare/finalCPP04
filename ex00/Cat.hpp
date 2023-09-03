#include "./Animal.hpp"


class Cat : public Animal{
    public:
    Cat();
    ~Cat();
    Cat (const Cat& original);
    Cat& operator=(const Cat& obj);
    void makeSound() const;
};