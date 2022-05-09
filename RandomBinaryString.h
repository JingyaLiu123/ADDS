#ifndef ADDS_PRAC6_RANDOMBINARYSTRING_H
#define ADDS_PRAC6_RANDOMBINARYSTRING_H

#include <stdlib.h>
#include <time.h>
#include <string>

class RandomBinaryString {
public:
    RandomBinaryString();
    int getRandomNumber(int maxRange);
    std::string generateString(int len);
};


#endif