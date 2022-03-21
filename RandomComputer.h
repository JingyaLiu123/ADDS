#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Computer.h"
#include <cstdlib>

class RandomComputer: public Computer
{
    public:
        RandomComputer();
        //char RandomMove();
        char getMove();
        ~RandomComputer();

};

#endif
