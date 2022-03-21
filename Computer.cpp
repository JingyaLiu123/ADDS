#include "Computer.h"
#include <iostream>

Computer::Computer()
{
    //Move = 'R';
}

char Computer::getMove(){
    Move = 'R';
    return Move;
}
Computer::~Computer(){}