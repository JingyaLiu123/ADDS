#include "Referee.h"
#include <iostream>

int main()
{
    //Avalanche av1;
    Human player1;
    /*Computer*//*Avalanche*/RandomComputer player2;
    std::cout << player2.getMove() << std::endl;
    Referee ref;
    std::cout << ref.refGame(player1, player2);
    

return 0;
}