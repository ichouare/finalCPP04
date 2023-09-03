#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"
#include "./WrongAnimal.hpp"

void leaks()
{
    system("leaks Animal");

}


int main()
{

// const Animal* j = new Dog();
// const Animal* i = new Cat();

//j->makeSound();
//i->makeSound();

// delete j;//should not create a leak
// delete i;
Animal *arr[2] = {
    new Dog(),
    new Cat(),
};
int y = 0;

Cat basic;
    {
        Cat tmp2 = basic;
        std::cout << tmp2.getType() << '\n'; 
    }
    // tmp2 is a local variable, so it gets destroyed here.  The destructor deletes tmp2's , which leaves 
    std::cout << basic.getType() << '\n';
 
    Dog basic1;
        {
            Dog tmp2 = basic1;
            std::cout << tmp2.getType() << '\n'; 
        }
        // tmp2 is a local variable, so it gets destroyed here.  The destructor deletes tmp2's , which leaves 
    std::cout << basic1.getType() << '\n';
    while(y < 2)
    {
        arr[y]->makeSound();
        y++;
    }

    y = 0;
    while(y < 2)
    {
        delete arr[y];
            y++;
    }
    return (0);
}
