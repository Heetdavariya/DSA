#include <bits/stdc++.h>
using namespace std;

int linear_search(vector<int> &nums, int n, int sn)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == sn)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number of an array : ";
        cin >> nums[i];
    }

    int sn;
    cout << "Enter the number to search : ";
    cin >> sn;

    int index = linear_search(nums, n, sn);
    if (index != -1)
        cout << "Element found at index : " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
