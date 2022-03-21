#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        char virtual getMove();
        ~Player();
    //protected://PROTECTED SO MOVE CAN BE INHERITED
        char Move;
};
#endif
