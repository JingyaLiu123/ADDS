#ifndef REARRANGE_H
#define REARRANGE_H
#include "Mutator.h"
#include <iostream>
using namespace std;

class Rearrange : public Mutator
{
    public:
        Individual mutate(Individual *obj1, int k);
        Rearrange();
        ~Rearrange();
};

#endif 