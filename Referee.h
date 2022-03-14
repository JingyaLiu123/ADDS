#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include <stdio.h>
#include "Human.h"
#include "Computer.h"

class Referee
{
    public:
        Referee();
        char refGame(Human player1, Computer player2);
        ~Referee();
    private:
        char Result;
        char Human_move;
        char Computer_move;
};

#endif

