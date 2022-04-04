#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>
#include "Reverse.h"

std::string Reverse::reverseString(std::string letters)
{
    std::string revletters;
    int n = letters.length();
    
    while(n > 0)
    {
        if(n == 0) {return "ERROR";}
        revletters += letters[n-1];
        return revletters + reverseString(letters.substr(0, n-1));
        n--;
    }
    return revletters;
}

int Reverse::reverseDigit(int value)
{
    if (value < 0) 
    {
        return -1;
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


