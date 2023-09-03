#ifndef CURE_H
#define CURE_H


#include "./AMateria.hpp"
class Cure : public  AMateria
{
public:
    Cure();
    ~Cure();
    Cure(const Cure& original);
    Cure& operator=(const Cure& original);
    Cure* clone() const;
    void use(ICharacter& target);
    
};

#endif