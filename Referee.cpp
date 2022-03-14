#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include <iostream>

Referee::Referee()
{
    Result = 'a';
}
char Referee::refGame(Human player1, Computer player2)
{
    Human_move = player1.getMove();
    Computer_move = player2.getMove();
    if (Human_move == Computer_move){
        Result = 'T';
    } else if (Human_move == 'P'){
        Result = 'W';
    } else if (Human_move == 'S'){
        Result = 'L';
    }
    return Result;
}




