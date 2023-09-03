#ifndef CHARCTER_H
#define CHARCTER_H

#include "./ICharacter.hpp"
#include "./MateriaSource.hpp"

class Character : public ICharacter
{
    public:
    Character();
    Character(std::string name);
    ~Character();
    Character(const Character& original);
    Character& operator=(const Character& original);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    private:
        std::string m_name;
        int m_i;
        AMateria *m_inventery[4];
};


#endif