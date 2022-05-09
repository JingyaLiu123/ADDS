#ifndef ADDS_PRAC6_MUTATOR_H
#define ADDS_PRAC6_MUTATOR_H
#include "Individual.h"

class Mutator {
public:
    virtual Individual mutate(Individual *parent, int k);
};


#endif 