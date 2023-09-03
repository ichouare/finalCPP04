#include "./WrongAnimal.hpp"


class WrongCat : public WrongAnimal{
    public:
    WrongCat();
    ~WrongCat();
    WrongCat(std::string type);
    WrongCat (const WrongCat& original);
    WrongCat& operator=(const WrongCat& obj);
    void makeSound() const;
};