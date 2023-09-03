#include "./MateriaSource.hpp"
#include "MateriaSource.hpp"



MateriaSource::MateriaSource():m_num(0)
{
        int i = 0;
        while(i < 4)
        {
            m_materias[i] = NULL;
            i++;
        }
}

MateriaSource::~MateriaSource()
{

    int i = 0;
    while(i < 4)
    {
        delete m_materias[i];
        i++;
    }
}

MateriaSource::MateriaSource(const MateriaSource& original)
{
    *(this) = original;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &original)
{
    if(this == &original)
        return (*this);

    m_num = 0;
    while (m_num < original.m_num)
    {
        m_materias[m_num] = original.m_materias[m_num];
        m_num++;
    }
    if(m_num != 3)
    {
        while(m_num < 4)
        {
              m_materias[m_num] = NULL;
              m_num++;
        }
    }
    m_num = original.m_num;
    return (*this);
}


void MateriaSource::learnMateria(AMateria *target)
{
    if(m_num <= 3)
    {
        m_materias[m_num] = target;
        m_num++;
    }
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while(i < m_num)
    {
        if(m_materias[i]->getType() == type)
        {
           return  m_materias[i]->clone();
        }
        i++;
    }
    return (0);
}