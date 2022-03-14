#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include <iostream>
using namespace std;

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
        cout << "T" << endl;
    } else if (Human_move == 'P'){
        Result = 'W';
        cout << "W" << endl;
    } else if (Human_move == 'S'){
        Result = 'L';
        cout << "L" << endl;
    }
    return 0;
}


