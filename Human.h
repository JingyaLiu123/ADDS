#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"

class Human: public Player
{
    public:
        Human();
        char getMove();
        //char makeMove();
        ~Human();
    //private:
      //  char humanMove;
};

#endif