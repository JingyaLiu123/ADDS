#include "Computer.h"
#include <iostream>

Computer::Computer()
{
    Move = 'R';
}

char Computer::getMove(){
    return Move;
}
