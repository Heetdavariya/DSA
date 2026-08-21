#include<bits/stdc++.h>
using namespace std;
// BRUTEFORCE 
// TC -> O(N^2) 
// SC -> O(N)
// vector<pair<int,int>> twosum(vector<int> &arr,int n,int t){
//     vector<pair<int,int>> temp;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j) continue;
//             if(arr[i] + arr[j] == t){
//                 temp.push_back({i,j});
//                 return temp;
//             }
//         }
//     }
// }

// BETTER   
// TC -> O(N log N) or O(N) if we take unorders map.
// SC -> O(N)
// void twosum(vector<int> &arr,int n,int t){
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         int a = arr[i];
//         int rem = t - a;
//         if(mpp.find(rem) != mpp.end()){
//             cout << i << " " << mpp[rem];
//         }
//         mpp[a] = i;
//     }
// }

// OPTIMAL but just slightly better and only for YES OR NO if want index then better would be optimal.
// TC -> O(N)*O(log N) 
// SC -> O(1)
void twosum(vector<int> &arr,int n,int t){
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum < t){
            i++;
        }else if(sum > t){
            j--;
        }else{
            cout <<"YES";
            return;
        }
    }
    cout << "NO";
}

int main(){
    int n,t;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number of an array : ";
        cin >> arr[i];
    }

    cout << "Enter the target value : ";
    cin >> t;
    
    // vector<pair<int,int>> ans = twosum(arr,n,t);
    
    // for(auto i : ans){
    //     cout << i.first << " " << i.second << endl;
    // }

    twosum(arr,n,t);

}