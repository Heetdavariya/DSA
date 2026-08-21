#include <bits/stdc++.h>
using namespace std;

int find_missing_num(vector<int> &nums, int n)
{
    int total_sum = (n + 1) * (n + 2) / 2;
    int sum = 0;
    for (auto it : nums) sum += it;
    return total_sum - sum;
}

int main()
{
    int n;
    cout << "Enter the size of an array (n numbers from 1 to n+1 with one missing) : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number of an array : ";
        cin >> nums[i];
    }

    cout << "Missing number : " << find_missing_num(nums, n) << endl;

    return 0;
}
