#include <iostream>
using namespace std;
#include <string>
#include "Human.h"

Human::Human()
{
    /*cout << "Hi I'm Human" << endl;
    char HumanMove;
    HumanMove = getHumanMove();*/
    hMove = 'a';
}
char Human::makeMove(){
    cout << "Enter move: ";
    cin >> hMove;
    return hMove;
}
char Human::getMove()
{
    return hMove;
}
