#include <iostream>
#include <stack>
#include <string>

#include "PrefixToInfix.h"

using namespace std;


bool PrefixToInfix::isValidExpression(std::string prefix) {
    int countOperator = 0;
    int countOperand = 0;
    string number = "";
    bool numberBefore = false;

    for (int i = 0; i < (int)prefix.size(); i++) {
        if (!isOperator(prefix[i]) && !isdigit(prefix[i]) && prefix[i] != ' ') return false;

        else if (isOperator(prefix[i])) {
            countOperator++;
        }
        else if (prefix[i] == ' ' && numberBefore == true) {
            if (stoi(number) > 99) return false;
            else {
                countOperand++;
                numberBefore = false;
                number = "";
            }
        }

        else if (isdigit(prefix[i])) {
            number += prefix[i];
            numberBefore = true;
        }
    }

    if (numberBefore) countOperand++;

    if (countOperand - countOperator != 1) return false;
    return true;
}

bool PrefixToInfix::isOperator(char ope) {
    if (ope == '+' || ope == '-' || ope =='*' || ope == '/') return true;
    return false;
}


int PrefixToInfix::prefixCalculator(string prefix) {
    if (prefix.size() < 2) return stoi(prefix);

    stack<int> operand;
    string number = "";
    bool numberBefore = false;

    for (int i = prefix.length() - 1; i >= 0; i--) {
        if (isOperator(prefix[i])) {
            int op1 = operand.top();
            operand.pop();
            int op2 = operand.top();
            operand.pop();

            if (prefix[i] == '+')
                operand.push(op1 + op2);
            else if (prefix[i] == '-')
                operand.push(op1 - op2);
            else if (prefix[i] == '*')
                operand.push(op1 * op2);
            else if (prefix[i] == '/')
                operand.push(op1 / op2);
        }
        else if (prefix[i] == ' ' && numberBefore){
            operand.push(stoi(number));
            number = "";
            numberBefore = false;

        }
        else if (isdigit(prefix[i])) {
            number = prefix[i] + number;
            numberBefore = true;
        }

      }
   return operand.top();
}


string PrefixToInfix::prefixToInfix(std::string prefix) {
    if (prefix.size() < 2) return prefix;
    
    stack<string> s;
    string number ="";
    bool numberBefore = false;

  // reading from right to left
    for (int i = prefix.length() - 1; i >= 0; i--) {
    // check if symbol is operator
        if (isOperator(prefix[i])) {

      // pop two operands from stack
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

      // put operands and operator in corect format
            string temp = "";
            if (i == 0 || prefix[i] == '*' || prefix[i] == '/') {
                temp =  op1 + " " + prefix[i] + " " + op2;
            }
            else {
                temp = "(" + op1 + " " + prefix[i] + " " + op2 + ")";
            }

      // Push string temp back to stack
            s.push(temp);
        }
        else if (prefix[i] == ' ' && numberBefore) {
            s.push(number);
            number = "";
            numberBefore  = false;
        }
        else if (isdigit(prefix[i])) {
            number = prefix[i] + number;
            numberBefore  = true;
        }
  }
    return s.top();
}

PrefixToInfix::~PrefixToInfix() {

}