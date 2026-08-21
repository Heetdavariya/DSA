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
bool is_sorted(vector<int> &arr, int n)
{
    bool is_sorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            is_sorted = false;
    }
    return is_sorted;
}
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
void left_rotateby_one(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
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
void right_rotateby_one(vector<int> &nums, int n)
{
    int temp = nums[n - 1];
    for (int i = n; i > 0; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[0] = temp;
}
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
void move_zeroestoend(vector<int> &arr, int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return;
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int linear_search(vector<int> &nums, int n, int sn)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == sn)
            return i;
    }
    return -1;
}
void union_arr(vector<int> &arr1, vector<int> &arr2, int n1, int n2)
{
    vector<int> unionarr;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionarr.size() == 0 || unionarr.back() != arr1[i])
            {
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionarr.size() == 0 || unionarr.back() != arr2[j])
            {
                unionarr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionarr.size() == 0 || unionarr.back() != arr1[i])
        {
            unionarr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionarr.size() == 0 || unionarr.back() != arr2[j])
        {
            unionarr.push_back(arr2[j]);
        }
        j++;
    }
    for(auto i : unionarr){
        cout << i << " ";
    }
    
}
int intersection_arr(vector<int> &arr1,vector<int> &arr2,int n1,int n2){
    vector<int> ans;
    int i=0;
    int j=0;
    while(i>n1 && j>n2){
        if(arr1[i] < arr2[j]) continue;
        if(arr1[i] > arr2[j]) j++;
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            j++;
        }
    }
    for(auto it : ans) cout << it << " ";
}
int find_missing_num(vector<int> &nums,int n){
    int total_sum = (n+1)*(n+2)/2;
    int sum=0;
    for(auto it : nums) sum+=it;
    return total_sum-sum;
}
int max_consicutive_1s(vector<int> &nums,int n){
    int max1=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            cnt++;
            if(cnt>max1){
                max1=cnt;
            } 
        }else{
            cnt=0;
        }
    }
    return max1;
}
int onlysingle_ele(vector<int> &nums,int n){
    int xorr=0;
    for(auto it : nums){
        xorr^=it;
    }
    return xorr;
}
int longest_subarr(vector<int> &arr,int n,int k){
    int sum=0;
    int ans=0;
    int j=1;
    for(int i=0;i<n;i++){
        sum=arr[i];
        while(sum<k && j<n){
            sum+=arr[j];
            j++;
        }
        if(sum!=k){
            j=i+2;
            sum=0;
        }
        if(sum==k){
            if(ans < j-i){
                ans = j-i;
            }
            sum=0;
            j=i+2;
        }
    }
    return ans;
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


    // cout << "Largest : " << largest(arr,n) << endl;
    // cout << "Second Largest : " << second_largest(arr,n) << endl;
    // cout << "Smallest : " << smallest(arr,n) << endl;
    // cout << "Second Smallest : " << second_smallest(arr,n) << endl;
    // cout << "Is Sorted : " << is_sorted(arr,n) << endl;
    // cout << "Unique elements : " << remove_duplicates(arr,n) << endl;
    // left_rotateby_one(arr,n);
    // left_rotateby_k(arr,n,3);
    // right_rotateby_one(arr,n);
    optimal_left_rotateby_k(arr,n,2);
    // move_zeroestoend(arr,n);
    // cout << linear_search(arr,n,5) << endl;
    // vector<int>arr1={1,2,3,4,5};
    // vector<int>arr2={1,3,5,7};
    // union_arr(arr1,arr2,arr1.size(),arr2.size());
    // intersection_arr(arr1,arr2,arr1.size(),arr2.size());
    // cout << find_missing_num(arr,n) << endl;
    // cout << max_consicutive_1s(arr,n) << endl;
    // cout << onlysingle_ele(arr,n) << endl;
    // cout << longest_subarr(arr1,arr1.size(),9);
    
    

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}