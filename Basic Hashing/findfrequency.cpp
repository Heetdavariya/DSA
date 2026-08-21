#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter " << i+1 << " number of an array : ";
        cin >> arr[i];
    }

    //precompute
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        int ele = it.first;
        int cnt = it.second;
        cout << ele << " : " << cnt << endl;
    }
    

    return 0;
}