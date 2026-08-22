#include<bits/stdc++.h>
using namespace std;

//BRUTE
// TC -> O(N^2)
// SC -> O(1)
// int majority_ele(vector<int> &arr,int n){
//     for(int i=0;i<n;i++){
//         int cnt=0;
//         for(int j=0;j<n;j++){
//             if(arr[i] == arr[j]){
//                 cnt++;
//             }
//         }
//         if(cnt > n/2){
//             return arr[i];
//         }
//     }
//     return -1;
// }

// BETTER
// TC -> O(N) + O(N log N)
// SC -> O(N) 
// int majority_ele(vector<int> &arr,int n){
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto i : mpp){
//         if(i.second > n/2) return i.first;
//     }
//     return -1;
// }

// OPTIMAL
// TC -> O(2N) and O(N) if there is majority ele is exists is final.
// SC -> O(1)
int majority_ele(vector<int> &arr,int n){
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt == 0){
            el = arr[i];
            cnt = 1;
        }else if(arr[i] == el){
            cnt++;  
        }else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(el == arr[i]){
            cnt1++;
        }
    }
    if(cnt1 > n/2) return el;
    return -1;
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

    cout << majority_ele(arr,n);

    return 0;
}