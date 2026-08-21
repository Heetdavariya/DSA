#include<bits/stdc++.h>
using namespace std;

//BRUTE : We can use merge sort or any other sorting algorithm
// TC -> O(N log N)
// SC -> O(N) (because we use tmp arr in merge sort)

//BETTER
// TC -> O(2N)
// SC -> O(1)
// void sort_012(vector<int> &arr,int n){
//     int cnt0=0,cnt1=0,cnt2=0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == 0){
//             cnt0++;
//         }else if(arr[i] == 1){
//             cnt1++;
//         }else{
//             cnt2++;
//         }
//     }
//     cout << "cnt0 = " << cnt0 << endl;
//     cout << "cnt1 = " << cnt1 << endl;
//     cout << "cnt2 = " << cnt2 << endl;
//     for(int i=0;i<cnt0;i++){
//         arr[i] = 0;
//     }
//     for(int i=cnt0;i<cnt0 + cnt1;i++){
//         arr[i] = 1;
//     }
//     for(int i=cnt0+cnt1;i<n;i++){
//         arr[i] = 2;
//     }
    // for(auto i : arr) cout << i << " ";
// }

//OPTIMAL 
// TC -> O(N)
// SC -> O(1)
void sort_012(vector<int> &arr,int n){
    int low=0,mid=0,high=n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(auto i : arr) cout << i << " ";
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

    sort_012(arr,n);

    

    return 0;
}