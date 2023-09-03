#ifndef MATERIALSOURCE_H
#define MATERIALSOURCE_H



#include "./IMateriaSource.hpp"



class MateriaSource:public IMateriaSource
{
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource& original);
    MateriaSource& operator=(const MateriaSource& original);
    void learnMateria(AMateria* target);
    AMateria* createMateria(std::string const & type);
    private:
        int m_num;
        AMateria *m_materias[4];
};

#endif