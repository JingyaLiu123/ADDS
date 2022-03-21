#include "RandomComputer.h"
#include <cstdlib>
#include <ctime>
using namespace std;

RandomComputer::RandomComputer()
{}

char RandomComputer::getMove(){
    srand(time(NULL));
    int r = rand()%3 +1;
    if(r==1)
        Move = 'R';
    else if (r==2)
        Move = 'P';
    else 
        Move = 'S';
return Move;
}

RandomComputer::~RandomComputer()
{}



