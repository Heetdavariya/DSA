//for positive this is optimal approach
#include<bits/stdc++.h>
using namespace std;
int ksum(vector<int> &nums,int k){
    int j=0,sum=0,maxLength=0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i]; 
        while(sum > k){
            sum-=nums[j];
            j++;
        }
        if(sum == k){
            maxLength = max(maxLength,i-j+1);
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