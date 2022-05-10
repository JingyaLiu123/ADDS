#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"
#include <iostream>
using namespace std;

class BitFlipProb : public Mutator
{
    public:
        BitFlipProb(double p); //
        Individual mutate(Individual *obj1, int k);
        double probability;
        ~BitFlipProb();
};

#endif
