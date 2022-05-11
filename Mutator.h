#ifndef MUTATOR_H
#define MUTATOR_H
#include "Individual.h"
#include <iostream>
using namespace std;

class Mutator 
{
    public:
        virtual Individual mutate(Individual *obj1, int k) = 0;
};

#endif 