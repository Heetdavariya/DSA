#include <bits/stdc++.h>
using namespace std;

int onlysingle_ele(vector<int> &nums, int n)
{
    int xorr = 0;
    for (auto it : nums)
    {
        xorr ^= it;
    }
    return xorr;
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

    cout << "Single element (appears only once) : " << onlysingle_ele(nums, n) << endl;

    return 0;
}
