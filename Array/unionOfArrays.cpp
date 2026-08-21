#include <bits/stdc++.h>
using namespace std;

void union_arr(vector<int> &arr1, vector<int> &arr2, int n1, int n2)
{
    vector<int> unionarr;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionarr.size() == 0 || unionarr.back() != arr1[i])
            {
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionarr.size() == 0 || unionarr.back() != arr2[j])
            {
                unionarr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionarr.size() == 0 || unionarr.back() != arr1[i])
        {
            unionarr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionarr.size() == 0 || unionarr.back() != arr2[j])
        {
            unionarr.push_back(arr2[j]);
        }
        j++;
    }
    for (auto i : unionarr)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 3, 5, 7};

    cout << "Union of arrays : ";
    union_arr(arr1, arr2, arr1.size(), arr2.size());
    cout << endl;

    return 0;
}
