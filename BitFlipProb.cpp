#include "BitFlipProb.h"
BitFlipProb::BitFlipProb(double p) {
    this->probability = p;
}

Individual BitFlipProb::mutate(Individual *parent, int k) {
    // not sure how to play with the possibility p
    // leave it out for now
    // & flip every bit of the dna string
    for(int i = 0; i < parent->getLength(); i++){
        // goes through every bit of the binaryString
        // & flips each bit with probability p
        parent->flipBit(i + 1);
    }

    return *parent;
}