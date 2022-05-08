#include "Individual.h"
#include <iostream>
//using namespace std;

int main()
{
    Individual t(16);
    // Individual t("0011001010101000");
    t.binaryString = "0011001010101000";
    cout << endl;
    cout << "getBit: " << t.getBit(11) << endl;
    cout << "getLength: " << t.getLength() << endl;
    cout << "getString: " << t.getString() << endl;
    cout << "flipBit:   ";
    t.flipBit(10);
    cout << endl;

    Individual t1("1001111110011001");
    cout << endl;
    cout << "getBit: " << t1.getBit(12) << endl;
    cout << "getLength: " << t1.getLength() << endl;
    cout << "getString: " << t1.getString() << endl;
    cout << "flipBit:   ";
    t1.flipBit(10);
    cout << endl;

}