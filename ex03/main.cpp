#include "./AMateria.hpp"
#include "./IMateriaSource.hpp"
#include "./MateriaSource.hpp"
#include "./Cure.hpp"
#include "./Ice.hpp"
#include "./Character.hpp"

int main()
{


IMateriaSource* b = new MateriaSource();
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());

ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
tmp = src->createMateria("ice");
me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// me->unequip(1);
// me->unequip(0);
ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);
// me->use(2, *bob);
// me->use(3, *bob);
// me->use(4, *bob);
// me->use(3, *bob);

*b = *src;

// // delete bob;
// delete me;
delete src;

me->use(0, *bob);
me->use(1, *bob);
me->use(2, *bob);
return 0;
}