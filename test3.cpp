#include "Reverse.h"
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
using namespace std;

std::string Reverse::reverseString(std::string letters)
{
    string revletters;
    int n = letters.length();
    while(n > 0) 
    {
        if(n==1){
            revletters = letters;
            return revletters;
        } else {
            revletters += letters[n-1];

            return revletters + reverseString(letters.substr(0, n-1));
            n--;
        }
    }
    return revletters;
}

int Reverse::reverseDigits(int value)
{
    if (value < 0) 
    {
        std::cout << "need non-negative value" << std::endl;
        return 0;
    }
    std::string str;
    std::stringstream ss;

    ss << value;
    ss >> str;
    int n = str.length();
    std::string revstr;

    while(n > 0)
    {
        revstr += str[n-1];
        revstr + reverseString(str.substr(0, n-1));
        n--;
    }
    int newval = stoi(revstr);
    return newval;
}



int main()
{
    Reverse Stringobj;
    Reverse Digitobj;
    cout << Digitobj.reverseDigits(234) << endl;
    cout << Stringobj.reverseString("Sam is here") <<endl;
    
    string a = "Hello";
    cout << a[a.length()-1] << endl;
    cout << "hello" << endl;
    return 0;
}