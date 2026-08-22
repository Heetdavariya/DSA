#include<bits/stdc++.h>
using namespace std;

// BRUTE
// TC -> O(N^3) 
// SC -> O(1)
// int maxsumsubarr(vector<int> &arr,int n){
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<j;k++){
//                 sum+=arr[k];
//             }
//             maxsum = max(maxsum,sum);
//         }
//     }
//     return maxsum;
// }

// BETTER
// TC -> O(N^2) 
// SC -> O(1)
// int maxsumsubarr(vector<int> &arr,int n){
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             maxsum = max(maxsum,sum);
//         }
//     }
//     return maxsum;
// }

// OPTIMAL
// TC -> O(N) 
// SC -> O(1)
pair<int,pair<int,int>> maxsumsubarr(vector<int> &arr,int n){
    int maxsum=INT_MIN;
    int sum=0,start=0,subs=-1,sube=-1;
    for(int i=0;i<n;i++){
        if(sum == 0){
            start = i;
        }
        sum+=arr[i];
        if(sum > maxsum){
            maxsum=sum;
            subs = start;
            sube = i; 
        }
        if(sum < 0) sum=0;
    }
    return {maxsum,{subs,sube}};
}

int main(){
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number of an array : ";
        cin >> arr[i];
    }

    pair<int,pair<int,int>> ans = maxsumsubarr(arr,n);
    cout << "Maximum sum of sub array is " << ans.first << " index : " << ans.second.first << " to " << ans.second.second;

    return 0;
}