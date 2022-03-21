#ifndef REFEREE_H
#define REFEREE_H
#include <stdio.h>
#include "Human.h"
#include "Computer.h"
//#include "Avalanche.h"
#include "RandomComputer.h"
class Referee
{
    public:
        Referee();
        char refGame(Human player1, /*Computer*//*Avalanche*/RandomComputer player2);
        ~Referee();
    private:
        char Result;
        char Human_move;
        char /*Computer_move*/P2_move;
};

#endif
