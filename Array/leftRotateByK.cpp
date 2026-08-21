#include <bits/stdc++.h>
using namespace std;

void left_rotateby_k(vector<int> &nums, int n, int k)
{
    k = k % n;
    vector<int> arr(k);
    for (int i = 0; i < k; i++)
    {
        arr[i] = nums[i];
    }
    for (int j = 0; j < n - k; j++)
    {
        nums[j] = nums[j + k];
    }
    for (int l = n - k; l < n; l++)
    {
        nums[l] = arr[l - n + k];
    }
}

void optimal_left_rotateby_k(vector<int> &nums, int n, int k)
{
    k = k % n;
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
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
    cout << "Enter k (rotation count) : ";
    cin >> k;

    // Using brute force approach
    vector<int> arr1 = arr;
    left_rotateby_k(arr1, n, k);
    cout << "Array after left rotation by " << k << " (brute force) : ";
    for (int i = 0; i < n; i++) cout << arr1[i] << " ";
    cout << endl;

    // Using optimal approach
    vector<int> arr2 = arr;
    optimal_left_rotateby_k(arr2, n, k);
    cout << "Array after left rotation by " << k << " (optimal) : ";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
