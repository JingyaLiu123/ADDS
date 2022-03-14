#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

class Computer
{
    public:
        Computer();
        char getMove();
        ~Computer();
    private:
        char Move;
};
#endif
