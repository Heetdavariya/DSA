#include <bits/stdc++.h>
using namespace std;

int longest_subarr(vector<int> &arr, int n, int k)
{
    int sum = 0;
    int ans = 0;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i];
        while (sum > k && j < n)
        {
            sum += arr[j];
            j++;
        }
        if (sum != k)
        {
            j = i + 2;
            sum = 0;
        }
        if (sum == k)
        {
            if (ans < j - i)
            {
                ans = j - i;
            }
            sum = 0;
            j = i + 2;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number of an array : ";
        cin >> arr[i];
    }
    cout << "Enter target sum k : ";
    cin >> k;

    cout << "Longest subarray with sum " << k << " has length : " << longest_subarr(arr, n, k) << endl;

    return 0;
}
