#include <bits/stdc++.h>
using namespace std;

void right_rotateby_k(vector<int> &nums, int n, int k)
{
    k = k % n;
    vector<int> arr(k);
    for (int i = 1; i <= k; i++)
    {
        arr[i - 1] = nums[n - i];
    }
    for (int j = n - 1 - k; j >= 0; j--)
    {
        nums[j + k] = nums[j];
    }
    for (int l = 0; l < k; l++)
    {
        nums[k - l - 1] = arr[l];
    }
}

int main()
{
    int n, k;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number of an array : ";
        cin >> nums[i];
    }
    cout << "Enter k (rotation count) : ";
    cin >> k;

    right_rotateby_k(nums, n, k);

    cout << "Array after right rotation by " << k << " : ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
