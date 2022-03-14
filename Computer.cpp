#include "Computer.h"
#include <iostream>
using namespace std;

Computer::Computer()
{
    Move = 'R';
}
/*char Computer::makeMove(char M){
    Move = M;
    M = 'R';
}*/
char Computer::getMove(){
    return Move;
}
