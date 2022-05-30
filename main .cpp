#include <iostream>
#include <string>

#include "PrefixToInfix.h"

using namespace std;

int main() {
    PrefixToInfix *converter = new PrefixToInfix();
    string prefix;
    getline(cin, prefix);

    if (converter->ValidExpression(prefix)) {
        cout << converter->prefixToInfix(prefix) << " = ";
        cout << converter->prefixCalculator(prefix) << endl;
    } else {
        cout << "Error" << endl;
    }
}