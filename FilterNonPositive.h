#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "FilterGeneric.h"
#include <vector>
#include <map>

class FilterNonPositive: public FilterGeneric
{
    public:
        int f(int);
        //std::vector<int> map(std::vector<int>);
};
#endif