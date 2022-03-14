#include <iostream>
#include "Human.h"

Human::Human()
{
    humanMove = 'a';
}
char Human::makeMove(){
    std::cout << "Enter move: ";
    std::cin >> humanMove;
    return humanMove;
}
char Human::getMove()
{
    return humanMove;
}
Human::~Human(){}
