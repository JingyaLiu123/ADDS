#ifndef REFEREE_H
#define REFEREE_H
#include <stdio.h>
#include <string>
#include <iostream>
#include "Player.h"
using namespace std;

class Referee
{
    public:
        Referee();
        string refGame(Player *player1, Player *player2);
        ~Referee();
    private:
        string Result;
        char P1_move;
        char P2_move;
};

#endif
