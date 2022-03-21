#include "Referee.h"

Referee::Referee()
{}
char Referee::refGame(Human player1, /*Computer*//*Avalanche*/RandomComputer player2)
{
    Human_move = player1.makeMove();
    /*Computer_move*/P2_move = player2.getMove();
    if (Human_move == /*Computer_move*/ P2_move|| Human_move == 'r'){
        Result = 'T';
    } else if (Human_move == 'P' || Human_move == 'p'){
        Result = 'W';
    } else if (Human_move == 'S' || Human_move == 's'){
        Result = 'L';
    }
   
    return Result;
}
Referee::~Referee(){}

