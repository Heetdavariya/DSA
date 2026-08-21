#include <bits/stdc++.h>
using namespace std;

int smallest(vector<int> &arr, int n)
{
    int s = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < s)
            s = arr[i];
    }
    return s;
}

int second_smallest(vector<int> &arr, int n)
{
    int s = arr[0];
    int ss = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < s)
        {
            ss = s;
            s = arr[i];
        }
        if (arr[i] < ss && arr[i] > s)
        {
            ss = arr[i];
        }
    }
    return ss;
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

    cout << "Smallest : " << smallest(arr, n) << endl;
    cout << "Second Smallest : " << second_smallest(arr, n) << endl;

    return 0;
}
