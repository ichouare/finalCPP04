#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain{
    public:
        Brain();
        ~Brain();
        Brain(const Brain& originale);
        Brain& operator=(const Brain& obj);
    private:
        std::string ideas[100];
};


#endif