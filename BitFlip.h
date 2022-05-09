#ifndef ADDS_PRAC6_BITFLIP_H
#define ADDS_PRAC6_BITFLIP_H
#include "Individual.h"
#include "Mutator.h"

class BitFlip : public Mutator {
    Individual mutate(Individual *parent, int k);
};


#endif 