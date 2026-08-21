//for positive + negative both this is optimal approach
#include<bits/stdc++.h>
using namespace std;
int ksum(vector<int> &nums,int k){
    int sum=0,maxLength=0;
    map<long long,int>mpp;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum == k){
            maxLength = max(maxLength,i+1);
        }
        long long rem = sum - k;
        if(mpp.find(rem) != mpp.end()){
            int length = i - mpp[rem];
            maxLength = max(maxLength,length);
        }
        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    return maxLength;
}
int main(){

    int n,k;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number of an array : ";
        cin >> nums[i];
    }
    cout << "Enter the sum of subarray : " << endl;
    cin >> k;
    cout << ksum(nums,k);


    return 0;
}