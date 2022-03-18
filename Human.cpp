#include <iostream>
#include "Human.h"

Human::Human()
{
    //humanMove = makeMove();
}
char Human::makeMove(){
    while (humanMove != 'S' && humanMove != 'R' && humanMove != 'P'){
        std::cout << "Enter move: ";
        std::cin >> humanMove;
    }

    return humanMove;
}
/*char Human::getMove()
{
    return humanMove;
}*/
Human::~Human(){}