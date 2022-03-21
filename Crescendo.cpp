#include "Crescendo.h"
#include "Player.h"

Crescendo::Crescendo(){}

char Crescendo::getMove()
{
    for(int i = 0; i < 5; i++){
        if (i == 0){Move = 'P';}
        if (i == 1){Move = 'S';}
        if (i == 2){Move = 'R';} 
        if (i == 3){Move = 'P';}
        if (i == 4){Move = 'S';} 
    }
    return Move;
}
Crescendo::~Crescendo(){}
