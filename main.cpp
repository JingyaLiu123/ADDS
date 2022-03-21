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
    Avalanche player1;
    Bureaucrat player2, player3;
    Toolbox player4, player5;
    Crescendo player6, player7;
    FistfullODollars player8;

    Tournament tourn1;
    array<Player *, 8> competitors;
    competitors = {&player1, &player2, &player3, &player4, &player5, &player6, &player7, &player8};
    tourn1.run(competitors);

    std::cout << player2.getMove() << std::endl;
    Referee ref;
    std::cout << ref.refGame(&player1, &player2);

    
    

return 0;
}