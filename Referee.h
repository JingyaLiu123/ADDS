#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include <stdio.h>
#include "Human.h"
#include "Computer.h"
using namespace std;

class Referee
{
    public:
        Referee();
        char refGame(Human playerH, Computer playerC);
    private:
        char Result;
        char Human_move;
        char Computer_move;
};
#endif
