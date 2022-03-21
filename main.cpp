#include "Referee.h"
#include "Player.h"
#include "Computer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "Human.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
#include "Tournament.h"
#include <iostream>

int main()
{
    Computer player1;
    RandomComputer player2;
    std::cout << player2.getMove() << std::endl;
    Referee ref;
    std::cout << ref.refGame(&player1, &player2);
    

return 0;
}