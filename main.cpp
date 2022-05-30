#include <vector>
#include <stack>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

bool isOperator(char x) {
  switch (x) {
  case '+':  case '-':  case '/':  case '*':
    return true;
  }
  return false;
}

bool OperatorOperandNum(int opratr, int oprnd)
{
    if (oprnd == opratr + 1) {return true;} else {return false;}
}

bool is0To99(int y)
{
    if (0 > y || y > 99){return false;} else {return true;}
}

string preToInfix(string pre_exp) {
  stack<string> s;
  string temp;
 
  int length = pre_exp.size();

  int operator_counter = 0;
  int operand_counter = 0;
  string ERR = "ERROR";

  for (int i = length - 1; i >= 0; i--) 
  {

    if (isOperator(pre_exp[i])) {
      operator_counter ++;

      string op1 = s.top();   s.pop();
      string op2 = s.top();   s.pop();
 
      string temp = "(" + op1 + pre_exp[i] + op2 + ")";
      s.push(temp);
    }
    else {
        if (isdigit(pre_exp[i]) && is0To99(pre_exp[i])) {
           operand_counter ++;
           s.push(string(1, pre_exp[i]));
        } else {
            s.push(ERR);
            break;
        }
    } 
  }
    if (OperatorOperandNum(operator_counter , operand_counter)) {
        return s.top();
    } else {
        s.push(ERR);
    }

    return s.top();
}

int main(void)
{
    string input;
    getline(cin, input);
    istringstream ss(input);
    string temp_input;
    string final_input;
    while(std::getline(ss, temp_input, ' ')) {
        if(final_input.empty()){final_input = temp_input;} 
        else {final_input = final_input + temp_input;}
}
    cout << preToInfix(final_input);   
}