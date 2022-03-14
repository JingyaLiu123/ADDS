#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include <iostream>
using namespace std;

Referee::Referee()
{
    Result = 'a';
}
char Referee::refGame(Human playerH, Computer playerC)
{
    Human_move = playerH.getMove();
    Computer_move = playerC.getMove();
    if (Human_move == Computer_move){
        Result = 'T';
        cout << "T" << endl;
    } else if (Human_move == 'P'){
        Result == 'W';
        cout << "W" << endl;
    } else if (Human_move == 'S'){
        Result == 'L';
        cout << "L" << endl;
    }
    return 0;
}


