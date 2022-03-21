#include <iostream>
#include "Human.h"

Human::Human()
{}
char Human::getMove(){
    while (Move != 'S' && Move != 's' && Move != 'r' && Move != 'R' && Move != 'p' && Move != 'P'){
        std::cout << "Enter move: ";
        std::cin >> Move;
    }
    return Move;
}

Human::~Human(){}