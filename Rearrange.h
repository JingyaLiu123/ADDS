#ifndef ADDS_PRAC6_REARRANGE_H
#define ADDS_PRAC6_REARRANGE_H
#include "Mutator.h"

class Rearrange :public Mutator{
public:
//    std::string binaryString;
//    Rearrange(std::string dnsString);
    Individual mutate(Individual *parent, int k);
};


#endif