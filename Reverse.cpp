#include "Reverse.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>


std::string Reverse::reverseString(std::string letters)
{
    //std::cout << "enter a string: " << std::endl;
    
    size_t num = letters.size();
    std::string revletters[num];

    if(num == 1)
    {
        revletters[num] = letters;
        std::cout << revletters[num];
    } else 
    {
        int count = num;
        revletters[num - count] = revletters[num - 1];
        std::cout << revletters[num - 1];
        reverseString(letters.substr(0, num - 1));
        count --;
        return revletters[num];
    }
    return revletters[num];
}

int int2char(int N)
{
    int m = N;
    int digits = 0;
    while (m) 
    {
        digits ++;
        m /= 10;
    }
    /*
    char* array;
    char array1[digits];
    array = (char*)malloc(digits);
    int index = 0;
    while (N) 
    {
        array1[++index] = N % 10 + '0';
        N /= 10;
    }
    int i;
    for (i=0;i<index;i++)
    {
        array[i] = '\0';
        return (char*)array;
    }
    return 0;
}
int main()
{
    int N = 123;
    int len = 5;
    char* array = int2char(N);
    for (int i=0; i<len; i++)
    {
        printf("%c ", array[i]);
    }
    return 0;
*/
    return digits;
}

int main(void) 
{
    Reverse obj;
    obj.reverseString("Sam");    
    
}
