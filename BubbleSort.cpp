#include "BubbleSort.h"

vector<int> BubbleSort :: sort(vector<int> list)
{
    for (int i = 0; i < (int) list.size() - 1; i++)
    {
        for (int j = 0; j < (int) list.size() - i - 1; j++)
        {
            if (list[i] > list[i + 1])
            {
                std::swap(list[i], list[i + 1]);
            } 
        }
    }
    return list;
}