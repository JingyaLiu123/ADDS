#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"
#include <iostream>
using namespace std;

int main(void) 
{
    Reverse Sobj;
    cout << Sobj.reverseString("Andy") << endl;  
    Reverse Dobj;
    cout << Dobj.reverseDigits(12345) << endl;  
}