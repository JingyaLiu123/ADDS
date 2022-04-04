#include "Reverse.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;


std::string Reverse::reverseString(std::string letters)
{
    size_t num = letters.size();
    std::string revletters[num];
    std::cout << num << " ";
    for(int i =0; i < num; i++){
    revletters[i] = letters[i];
    std::cout << revletters[i];}
    cout << endl;

    if(num == 1)
    {
        revletters[num] = letters[num];
        std::cout << revletters[num] << endl;
        return revletters[num];
    } else 
    {
        int count = num;
        revletters[num - count] = letters.substr(0, num - 1);
        std::cout << revletters[num - count] << endl;
        reverseString(letters.substr(0, num - 1));
        count --;
        return letters;
        return reverseString(letters.substr(0, num-1));
        reverseString(letters.substr(0, num-1));
    }
    
   return revletters[num];
}
int main(void) 
{
    Reverse obj;
    obj.reverseString("Sam");  
    string a = "Jane";
    cout << a[3] << endl;  
    
}
