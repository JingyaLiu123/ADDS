#include "Referee.h"
#include <iostream>

int main()
{
    Computer player1;
    //player1.getMove();

    Human player2;
    //player2.makeMove();

    Referee ref;
    std::cout << ref.refGame(player2, player1) << std::endl;

return 0;
}