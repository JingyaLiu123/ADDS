#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;

//initate class
class Human
{
    public:
        Human();
        char makeMove();
        char getMove();

    private:
        char humanMove;
};

#endif
