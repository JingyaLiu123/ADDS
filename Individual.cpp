#include "Individual.h"

#include <utility>

Individual::Individual(int len) {
    for(int i = 0; i < len; i++){
        this->binaryString += '0';
    }
}

Individual::Individual(std::string dnaString) {
    this->binaryString = dnaString;
}

std::string Individual::getString() {
    return this->binaryString;
}

// debug function
// return string seperated by space every 4 bytes
// std::string Individual::getString_4Bytes() {
//     std::string s;
//     for(int i = 0; i < (int) this->binaryString.length(); i++){
//         if(i > 0 && i % 4 == 0){
//             s += ' ';
//         }
//         s += this->binaryString[i];
//     }
//     return s;
// }

int Individual::getBit(int pos) {
    if( pos < 1 || pos >= (int) this->binaryString.length()){
        return -1;
    }
//    char c = this->binaryString[pos];
//    return c - '0';
    return (int) this->binaryString[pos -1 ] - '0';
}

void Individual::flipBit(int pos) {
    if(pos < 1 || pos > (int) this->binaryString.length())
        //return -1;
char bit;
    char bit = this->binaryString[pos - 1] - '0';
    this->binaryString[pos -1 ] = bit == 1 ? '0' : '1';
    //return bit;
}

int Individual::getMaxOnes() {
    int count = 0;
    for(int i = 0, n  = 0; i < (int) this->binaryString.length(); i++){
        if(this->binaryString[i] == '1')
            n++;
        else{
            if(n > count)
                count = n;
            n = 0;
        }
    }
    return count;
}

int Individual::getLength() {
    return (int) this->binaryString.length();
}