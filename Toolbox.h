#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Computer.h"
#include "Player.h"

class Toolbox: public Computer
{
    public:
        Toolbox();
        ~Toolbox();
        char getMove();

};

#endif
