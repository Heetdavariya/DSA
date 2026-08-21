#include <bits/stdc++.h>
using namespace std;

void right_rotateby_one(vector<int> &nums, int n)
{
    int temp = nums[n - 1];
    for (int i = n; i > 0; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[0] = temp;
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

    right_rotateby_one(nums, n);

    cout << "Array after right rotation by 1 : ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
