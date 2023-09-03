#include "./Animal.hpp"


class Dog : public Animal{
    public:
    Dog();
    Dog(std::string type);
    ~Dog();
    Dog (const Dog& original);
    Dog& operator=(const Dog& obj);
    void makeSound() const;
};