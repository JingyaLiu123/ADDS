#include "FistfullODollars.h"
#include "Player.h"

FistfullODollars::FistfullODollars(){}

char FistfullODollars::getMove()
{
    for(int i = 0; i < 5; i++){
        if (i == 0){Move = 'R';}
        if (i == 1){Move = 'P';}
        if (i == 2){Move = 'P';} 
        if (i == 3){Move = 'R';}
        if (i == 4){Move = 'P';} 
    }
    return Move;
}

FistfullODollars::~FistfullODollars(){}