#ifndef ADDS_PRAC6_INDIVIDUAL_H
#define ADDS_PRAC6_INDIVIDUAL_H
#include <string>

class Individual {
public:
    std::string binaryString;

    explicit Individual(int len);
    explicit Individual(std::string dnaString);

    std::string getString();
    //std::string getString_4Bytes();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
};


#endif