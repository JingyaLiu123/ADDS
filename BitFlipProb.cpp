#include "BitFlipProb.h"

Individual BitFlipProb :: mutate(Individual *obj1, int k)
{
    int len = obj1 -> getLength();
    for (int i = 0; i < len; i++){
        if(probability < 0){
            cout << "probability out of bounds" << endl;
        } else if (probability < 0.5){
            obj1 -> getString();  
        } else if (probability >= 0.5) {
            obj1 -> flipBit(i);
        } else if (probability > 1) {
            cout << "probability out of bounds" << endl;
        }
        
    }
    return *obj1;
}

BitFlipProb :: BitFlipProb(double p) 
{
    this -> probability = p;
}
// BitFlipProb :: ~BitFlipProb() {}