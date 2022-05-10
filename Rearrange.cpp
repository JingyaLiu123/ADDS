#include "Rearrange.h"

Individual Rearrange :: mutate(Individual *obj1, int k)
{
    int len = obj1 -> getLength();
    int re_pos;
    if (k > len){
        k = k%len;
        re_pos = k - 1;
    } else {
        re_pos = k - 1;
    }
    string str1, str2;
    for (int i = 0; i < re_pos - 1; i++){
        str1 =+ obj1 -> binaryString[i];
    } 
    for (int i = re_pos - 1; i < len; i++){
        str2 =+ obj1 -> binaryString[i];
    }

    obj1 -> binaryString = str2 + str1;
    
    return *obj1;
}

// Rearrange :: Rearrange() {}
// Rearrange :: ~Rearrange() {}
