#include <iostream>
using namespace std;

string reverse(const string& a);

string reverse(const string& str) {

  // store the size of the string
  size_t numOfChars = str.size();
  string word[numOfChars];

  if(numOfChars == 1) {
    //cout << str << endl;
    word[numOfChars] = str;
  }
  else {
    //cout << str[numOfChars - 1];
    int count = numOfChars;
    word[numOfChars-count] = str[numOfChars - 1];
    reverse(str.substr(0, numOfChars - 1)); //func recursion
    count --;
  }
  return word[numOfChars];
}

int main(void) {
  string str; //string object
  cout << " Please enter a string " << endl;
  getline(cin, str);

  reverse(str);
   
}

