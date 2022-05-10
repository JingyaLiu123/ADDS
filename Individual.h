#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>
using namespace std;

class Individual
{
    public:
        //Individual();
        Individual(int a); 
        Individual(string b); //should have constructor
        string binaryString;
        string getString();
        int getBit(int Pos);
        void flipBit(int Pos);
        int getMaxOnes();
        int getLength();
        //~Individual(); //have constructors only for parameterised funcs 

};
#endif
