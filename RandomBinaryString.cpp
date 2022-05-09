#include "RandomBinaryString.h"

RandomBinaryString::RandomBinaryString() {
    srand(time(NULL));
}

int RandomBinaryString::getRandomNumber(int maxRange) {
    return rand() % maxRange;
}

std::string RandomBinaryString::generateString(int len) {
    std::string s;

    for(int i = 0; i < len; i++){
        s += rand() % 2 == 1 ? '1' : '0';
    }
    return s;
}