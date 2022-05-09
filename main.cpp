#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <iostream>

Individual * execute(Individual * indPtr, Mutator * mPtr, int k)
{
    mPtr -> mutate(indPtr, k);
    return indPtr;
}

int main(int argc, char* argv[])
{
    Individual *t = new Individual (16);
    t -> binaryString = "0011001010101000";
    cout << endl;
    cout << "getBit: " << t -> getBit(11) << endl;
    cout << "getLength: " << t -> getLength() << endl;
    cout << "getString: " << t -> getString() << endl;
    cout << "flipBit:   ";
    t -> flipBit(10);
    cout << endl;
    cout << "getmax1s: " << t -> getMaxOnes() << endl;
cout << "--------------------------" << endl;
    Individual t1("1001111110011001");
    cout << endl;
    cout << "getBit: " << t1.getBit(12) << endl;
    cout << "getLength: " << t1.getLength() << endl;
    cout << "getString: " << t1.getString() << endl;
    cout << "flipBit:   ";
    t1.flipBit(10);
    cout << endl;
    cout << "getmax1s: " << t1.getMaxOnes() << endl;
cout << "-------------------------" << endl;
    Mutator *M = new Mutator;
    execute(t, M, 1);
    BitFlip B;
    B.mutate(t, 1);
    cout << endl;
    BitFlipProb BFP(2);
    BFP.mutate(t, 1);
    cout << endl;
    Rearrange R;
    R.mutate(t, 1);

    

}