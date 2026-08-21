#include <bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> &arr, int n)
{
    bool is_sorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            is_sorted = false;
    }
    return is_sorted;
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number of an array : ";
        cin >> arr[i];
    }

    cout << "Is Sorted : " << is_sorted(arr, n) << endl;

    return 0;
}
