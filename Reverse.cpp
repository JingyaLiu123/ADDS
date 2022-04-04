#include "Reverse.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>


std::string Reverse::reverseString(std::string letters)
{
    std::string revletters;
    int n = letters.length();
    
    while(n > 0)
    {
        revletters += letters[n-1];
        return revletters + reverseString(letters.substr(0, n-1));
        n--;
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


