#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <vector>
#include <array>

class Tournament
{
    public:
        Tournament();
        Player * run(array<Player *, 8>  competitors);
        ~Tournament();

};

#endif