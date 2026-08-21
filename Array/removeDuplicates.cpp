#include <bits/stdc++.h>
using namespace std;

int remove_duplicates(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
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

    int uniqueCount = remove_duplicates(arr, n);
    cout << "Unique elements count : " << uniqueCount << endl;
    cout << "Array after removing duplicates : ";
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
