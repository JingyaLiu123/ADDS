#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
using namespace std;

class Computer
{
    public:
        Computer();
        //char makeMove(char M);
        char getMove();
    private:
        char Move;
};
#endif
