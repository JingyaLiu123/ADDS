#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Computer.h"
#include "Player.h"

class Avalanche: public Computer
{
    public:
        Avalanche();
        ~Avalanche();
        char getMove();

};



#endif 