#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Player.h"

class Crescendo: public Player
{
    public:
        Crescendo();
        ~Crescendo();
        char getMove();
};

#endif