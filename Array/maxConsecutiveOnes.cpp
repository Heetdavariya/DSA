#include <bits/stdc++.h>
using namespace std;

int max_consicutive_1s(vector<int> &nums, int n)
{
    int max1 = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
            if (cnt > max1)
            {
                max1 = cnt;
            }
        }
        else
        {
            cnt = 0;
        }
    }
    return max1;
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number of an array (0 or 1) : ";
        cin >> nums[i];
    }

    cout << "Max consecutive 1s : " << max_consicutive_1s(nums, n) << endl;

    return 0;
}
