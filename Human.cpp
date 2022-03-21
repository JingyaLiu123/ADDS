#include <iostream>
#include "Human.h"

Human::Human()
{}
char Human::makeMove(){
    while (humanMove != 'S' && humanMove != 's' && humanMove != 'r' && humanMove != 'R' && humanMove != 'p' && humanMove != 'P'){
        std::cout << "Enter move: ";
        std::cin >> humanMove;
    }
    return humanMove;
}

Human::~Human(){}