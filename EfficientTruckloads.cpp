#include "EfficientTruckloads.h"
#include <iostream>

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{   
    int oddcount;
    int numtruck;
    //-----------base case----------------
    if (numCrates <= loadSize){
        return 1;
    } 
    //------------------------------------
    else {
        if(numCrates/2 >= loadSize){
            if(numCrates%2 == 0){
                numtruck++;
                return numTrucks(numCrates/2, loadSize);
            } else if (numCrates%2 == 1)
            {
                oddcount++;
                numtruck++;
                if(oddcount <= loadSize || oddcount == loadSize){
                    numtruck++;
                } else if(oddcount >= loadSize){
                    return numTrucks(numCrates + oddcount, loadSize);
                }
            }
        } else if (numCrates/2 <= loadSize || numCrates/2 == loadSize){
            numtruck++;
            return numtruck;
        }
    }
    return numtruck;
}

// int main(void)
// {
//     EfficientTruckloads obj;
//     std::cout << obj.numTrucks(3, 1);
// }