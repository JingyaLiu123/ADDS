#include "Individual.h"
#include <iostream>

//Individual :: Individual() {cout << "I'm an Individual object" << endl;}

Individual :: Individual(int a)
{
    for(int i = 0; i < a; i++)
    {
        this -> binaryString[i] = '0';
        //cout << binaryString[i];
    }
}

Individual :: Individual(string b)
{
    this -> binaryString = b;
//     for (int i = 0; i < b.length(); i++)
//     {
//         cout << binaryString[i];
//     }
}

int Individual :: getLength()
{
    return binaryString.length();
}

string Individual :: getString()
{
    return binaryString;
}

int Individual :: getBit(int Pos)
{
    if (Pos < 0 || Pos > binaryString.length())
    {
        //cout << "length out of range: -1" << endl;
        return -1;
    }  
        //char *binVal = new char;
        //binVal = &binaryString.at(Pos);
        //return binVal;
    //-------------------------------------------------
        char binVal = binaryString[Pos];
        //cout << binVal << endl;
        //int int_binVal = (int)binVal - '0';
        int int_binVal = (int)binaryString[Pos] - '0';
        return int_binVal;
        
        //return (int) this -> binaryString[Pos] - '0'; //'0' = 48
}

void Individual :: flipBit(int Pos)
{
    int binIndex = Pos;
    string str1 = "1";
    string str2 = "0";

    if((char) binaryString[binIndex] == '0') 
    {
        binaryString.replace(binIndex, 1, str1);
        //for (int i = 0; i < binaryString.length(); i++)
        //{
            //cout << binaryString[i];
        //}
    } else if ((char)binaryString[binIndex] == '1')
    {
        binaryString.replace(binIndex, 1, str2);
        // for (int i = 0; i < binaryString.length(); i++)
        // {
        //     cout << binaryString[i];
        // }
    } else 
    {
        //cout << "value is not 0 or 1" << endl;
    }
}

int Individual :: getMaxOnes()
{
    int counter = 0;
    for (int i = 0, n = 0; i < (int)binaryString.length(); i++)
    {
        if(binaryString[i] == '1')
        {
            n ++;
        } else {
            if(n > counter)
            {
                counter = n;
            }
            n = 0;
        }
    }
    return counter;
}
//Individual :: ~Individual() {}