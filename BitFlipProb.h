#ifndef ADDS_PRAC6_BITFLIPPROB_H
#define ADDS_PRAC6_BITFLIPPROB_H

#include "Mutator.h"

class BitFlipProb : public Mutator{
private:
    double probability;
public:
    explicit BitFlipProb(double p);
    Individual mutate(Individual *parent, int k);
};


#endif