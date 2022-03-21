#include "Referee.h"
#include "Player.h"

Referee::Referee()
{}
string Referee::refGame(Player *player1, Player *player2)
{
    P1_move = player1 -> getMove();
    P2_move = player2 -> getMove();

    if (P1_move == 'R' || P1_move == 'r'){
        if(P2_move == 'R'){ Result = "Draw";}
        else if(P2_move == 'P'){Result = "Winner: P2";}
        else if(P2_move == 'S'){Result = "Winner: P1";}
    }
    else if (P1_move == 'P' || P1_move == 'p'){
        if(P2_move == 'R'){Result = "Winner: P1";}
        else if (P2_move == 'P'){Result = "Draw";}
        else if (P2_move == 'S'){Result = "Winner: P2";}
    } 
    else if (P1_move == 'S' || P1_move == 's'){
        if(P2_move == 'R'){Result = "Winner: P2";}
        else if (P2_move == 'P'){Result = "Winner: P1";}
        else if (P2_move == 'S'){Result = "Draw";}
    }
    return Result;
}

Referee::~Referee(){}

