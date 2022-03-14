#include <iostream>
using namespace std;
#include <string>
#include "Human.h"

Human::Human()
{
    humanMove = 'a';
}
char Human::makeMove(){
    cout << "Enter move: ";
    cin >> humanMove;
    //while (humanMove != 'S' && humanMove != 'R' && humanMove != 'P');
    return humanMove;
}
char Human::getMove()
{
    return humanMove;
}
