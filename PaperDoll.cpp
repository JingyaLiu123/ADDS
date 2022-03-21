#include "PaperDoll.h"
#include "Player.h"

PaperDoll::PaperDoll(){}

char PaperDoll::getMove()
{
    for(int i = 0; i < 5; i++){
        if (i == 0){Move = 'P';}
        if (i == 1){Move = 'S';}
        if (i == 2){Move = 'S';} 
        if (i == 3){Move = 'P';}
        if (i == 4){Move = 'S';} 
    }
    return Move;
}
PaperDoll::~PaperDoll(){}
