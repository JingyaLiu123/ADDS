#include "MapAbsoluteValue.h"
#include <iostream>
#include <list>
#include <map>
#include <string>

int mapfunc1()
{
    std::map<std::string, std::list<int>> MyMap;
    std::list<int> Nums {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    MyMap.insert(std::pair<std::string, std::list<int>> ("Nums", Nums));

    for(auto pair : MyMap)
    {
        //std::cout << pair.first << " : ";

        for(auto func : pair.second)
        {
            int func1 = func + 1;
            int func2 = func*3;
            func = abs(func);
            std::cout << func << " ";
        }
        std::cout << std::endl;

    }
    system("pause>0");
    return 0;
}