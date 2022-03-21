#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Computer.h"
#include "Player.h"

class Bureaucrat: public Computer
{
    public:
        Bureaucrat();
        ~Bureaucrat();
        char getMove();

};

#endif 
