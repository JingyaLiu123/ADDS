#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include "Sort.h"
#include <vector>

class RecursiveBinarySearch : public Sort
{
    public:
        bool search(std::vector<int>, int);
};

#endif