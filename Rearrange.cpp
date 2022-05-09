#include <iostream>
#include "Rearrange.h"

Individual Rearrange::mutate(Individual *parent, int k) {
    int dna_len = parent->getLength();
    int pos = (k > dna_len ? k % dna_len : k);

    // check boundary conditions
    if(pos == 0){
        // here pos must >= 1
        pos = dna_len;
    }

    // move the binaryString from the pos til the end to the beginning
    std::string str_1;
    for(int i = 0; i < pos - 1; i++){
        str_1 += parent->binaryString[i];
    }
    std::string str_2;
    for(int i = pos - 1; i < parent->getLength(); i++){
        str_2 += parent->binaryString[i];
    }

//    std::cout << "DNA before rearrange:" << std::endl << parent->binaryString << std::endl;
    parent->binaryString = str_2 + str_1;
//    std::cout << "DNA after rearrange:" << std::endl << parent->binaryString << std::endl;

    return *parent;
}