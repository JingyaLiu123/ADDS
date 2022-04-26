#ifndef FILTERODD_H
#define FILTERODD_H
#include "FilterGeneric.h"
#include <vector>
#include <map>

class FilterOdd: public FilterGeneric
{
    public:
        int f(int);
        //std::vector<int> map(std::vector<int>);
};
#endif