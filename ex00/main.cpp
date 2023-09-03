#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"
#include "./WrongAnimal.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
// meta->makeSound();
delete meta;
delete i;
delete j;

std::cout << "-----------------" << std::endl;
const WrongAnimal* metaa = new WrongAnimal();
const WrongAnimal* d = new WrongCat();
std::cout << d->getType() << " " << std::endl;
d->makeSound();
delete metaa;
delete d;
return 0;
}