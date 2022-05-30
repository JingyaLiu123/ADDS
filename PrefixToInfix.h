#ifndef PREFIX_H
#define PREFIX_H
class PrefixToInfix {
    public:
        bool isOperator(char ope);
        bool ValidExpression(std::string prefix);
        int prefixCalculator(std::string prefix);
        std::string prefixToInfix(std::string prefix);
        ~PrefixToInfix();
};
#endif