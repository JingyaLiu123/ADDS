#include "BitFlip.h"

Individual BitFlip :: mutate(Individual *obj1, int k)
{
    int len = obj1 -> getLength();
    int flip_pos;
    if (k > len){
        k = k%len;
        flip_pos = k - 1;
    } else {
        flip_pos = k - 1;
    }
    obj1 -> flipBit(flip_pos);
    return *obj1;
}

// BitFlip :: BitFlip() {}
// BitFlip :: ~BitFlip() {}