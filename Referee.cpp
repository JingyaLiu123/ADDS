#include "Referee.h"
#include "Player.h"

Referee::Referee()
{}
Player* Referee::refGame(Player *player1, Player *player2)
{
    Player* winner;
    P1_move = player1 -> getMove();
    P2_move = player2 -> getMove();

    if (P1_move == 'R' || P1_move == 'r'){
        if(P2_move == 'R'){winner = nullptr;}
        else if(P2_move == 'P'){winner = player2;}
        else if(P2_move == 'S'){winner = player1;}
    }
    else if (P1_move == 'P' || P1_move == 'p'){
        if(P2_move == 'R'){winner = player1;}
        else if (P2_move == 'P'){winner = nullptr;}
        else if (P2_move == 'S'){winner = player2;}
    } 
    else if (P1_move == 'S' || P1_move == 's'){
        if(P2_move == 'R'){winner = player2;}
        else if (P2_move == 'P'){winner = player1;}
        else if (P2_move == 'S'){winner = nullptr;}
    }
    return winner;
}

Referee::~Referee(){}

