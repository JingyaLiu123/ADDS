#include <iostream>
#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"
using namespace std;

int main(void) 
{
    Reverse Sobj;
    cout << Sobj.reverseString("Andy") << endl;  
    Reverse Dobj;
    cout << Dobj.reverseDigit(-12345) << endl;  
    Truckloads Tobj;
    cout << Tobj.numTrucks(1, 1) << endl;
    EfficientTruckloads ETobj;
    cout << ETobj.numTrucks(2, 1) << endl;
}