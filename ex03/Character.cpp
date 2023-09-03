#include "./Character.hpp"



Character::Character():m_name("user_2154"),m_i(0)
{
    int j = 0;
    while(j < 4)
    {
        m_inventery[j] = NULL;
        j++; 
    }
}


Character::Character(std::string m_name):m_name(m_name),m_i(0)
{
    int j = 0;
    while(j < 4)
    {
        m_inventery[j] = NULL;
        j++; 
    }
}


Character::~Character()
{
    int j = 0;
    while(j < 4)
    {
        
       delete m_inventery[j];
        j++; 
    }

}


Character::Character(const Character& original)
{
    *(this) = original;
}

Character& Character::operator=(const Character& original)
{
    if(this == &original)
        return(*this);
    m_i = 0;
    m_name = original.m_name;
    while( m_i < original.m_i)
    {
        m_inventery[m_i] = original.m_inventery[m_i]; 
        m_i++;
    }
    if(m_i != 3)
    {
        while(m_i < 4)
    {
        m_inventery[m_i] = NULL; 
        m_i++;
    } 
    m_i = original.m_i;
    }
    return (*this);
}


std::string const &Character::getName() const
{
    return m_name;
}

void Character::equip(AMateria* m)
{
    if(m_i <= 3)
    {
        m_inventery[m_i] = m;
        m_i++;
    }
    else
        std::cout << "not empty slot found" << std::endl;
}


void Character::unequip(int idx)
{
    if(idx >= 0 && idx <= 3)
    {
        MateriaSource ptr;
        ptr.learnMateria(m_inventery[idx]);
        m_inventery[idx] =  NULL;
        if(idx != 0)
            m_i--;
    }
}


void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4 && m_inventery[idx] != NULL)
    {
        m_inventery[idx]->use(target);
    }
}