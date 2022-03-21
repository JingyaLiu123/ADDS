#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Computer.h"
#include "Player.h"
#include <cstdlib>

class RandomComputer: public Computer
{
    public:
        RandomComputer();
        char getMove();
        ~RandomComputer();

};

#endif
