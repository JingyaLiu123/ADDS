#include <vector>
#include <array>
#include <string>
#include <iostream>
#include "Tournament.h"
#include "Player.h"
#include "Referee.h"
using namespace std;

Tournament::Tournament(){}

Player* Tournament::run(std::array<Player *, 8>  competitors)
{
    Player* winner = new Player();
    for (int i = 0; i < 5; i++)
    {
        Player* refGame(competitors.at(0), competitors.at(1));
    }
        
        
            Player* r1_winner = new Player();
            r1_winner = winner;
        
        string refGame(Player *player3, Player *player4);
        string refGame(Player *player5, Player *player6);
        string refGame(Player *player7, Player *player8);

    return winner;
}

Tournament::~Tournament(){}

