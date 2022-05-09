#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"
#include <iostream>
using namespace std;

class BitFlip : public Mutator 
{
    public:
        BitFlip();
        Individual mutate(Individual *obj1, int k);
        ~BitFlip();
};

#endif 