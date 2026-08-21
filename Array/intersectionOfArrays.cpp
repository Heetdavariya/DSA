#include <bits/stdc++.h>
using namespace std;

int intersection_arr(vector<int> &arr1, vector<int> &arr2, int n1, int n2)
{
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i > n1 && j > n2)
    {
        if (arr1[i] < arr2[j]) continue;
        if (arr1[i] > arr2[j]) j++;
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            j++;
        }
    }
    for (auto it : ans) cout << it << " ";
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 3, 5, 7};

    cout << "Intersection of arrays : ";
    intersection_arr(arr1, arr2, arr1.size(), arr2.size());
    cout << endl;

    return 0;
}
