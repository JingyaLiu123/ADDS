#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

class Human
{
    public:
        Human();
        char makeMove();
        char getMove();
        ~Human();
    private:
        char humanMove;
};

#endif
