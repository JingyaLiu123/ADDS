#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

class Computer
{
    public:
        Computer();
        virtual char getMove();
        ~Computer();
    //private: CHANGED TO PRIVATE SO MOVE CAN BE INHERITED
    protected:
        char Move;
};
#endif