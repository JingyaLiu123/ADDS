#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include <iostream>
using namespace std;

Referee::Referee()
{
    //Result = 'a';
    cout << Result << endl;
}

char Referee::refGame(Human player1, Computer player2)
{
    Human_move = player1.makeMove();
    Computer_move = player2.getMove();
    if (Human_move == Computer_move){
        Result = 'T';
    } else if (Human_move == 'P'){
        Result == 'W';
    } else if (Human_move == 'S'){
        Result == 'L';
    }
    return Result;
}
