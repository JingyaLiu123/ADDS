#include "QuickSort.h"

vector<int> QuickSort :: sort(vector<int> list) 
{
    int list_size = (int) list.size();
    int pivot_pos;
    int pivot;

    if (list_size >= 3)
    {
        pivot_pos = 2;
    } else if (list_size >= 0) {
        pivot_pos = 0;
    }

    pivot = list[pivot_pos];
    vector<int> pre_list;
    vector<int> post_list;

    for (int i = 0; i < list_size; i++)
    {
        int curnt_val = list[i];
        //int next_val = list[i + 1];
        if (curnt_val < pivot) 
        {
            pre_list.push_back(curnt_val);
        } else {
            post_list.push_back(curnt_val);
        }
    }
    QuickSort::sort(pre_list);
    QuickSort::sort(post_list);

    for (int i = 0; i < (int) pre_list.size(); i++)
    {
        list.push_back(pre_list[i]);
    }
    for (int i = 0; i < (int) post_list.size(); i++)
    {
        list.push_back(post_list[i]);
    }
}
