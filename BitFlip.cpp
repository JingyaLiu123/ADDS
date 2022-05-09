#include "BitFlip.h"

Individual BitFlip::mutate(Individual *parent, int k) {
    int dnaLen = parent->getLength();
    int pos = k > dnaLen ? k % dnaLen : k;
    parent->flipBit(pos);
    return * parent;
}