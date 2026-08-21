#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr, int n)
{
    int l = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > l)
            l = arr[i];
    }
    return l;
}

int second_largest(vector<int> &arr, int n)
{
    int l = arr[0];
    int sl = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > l)
        {
            sl = l;
            l = arr[i];
        }
        if (arr[i] > sl && arr[i] < l)
        {
            sl = arr[i];
        }
    }
    return sl;
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

    cout << "Largest : " << largest(arr, n) << endl;
    cout << "Second Largest : " << second_largest(arr, n) << endl;

    return 0;
}
