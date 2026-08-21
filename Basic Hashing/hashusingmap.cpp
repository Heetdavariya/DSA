#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,sn;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter " << i+1 << " number of array : ";
        cin >> arr[i];
    }

    //precompute
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    //iterate map
    // for(auto it : mpp){
    //     cout << it.first << " " << it.second;
    // }

    int q;
    cout << "Enter howmany numbers you want to search : ";
    cin >> q;
    while(q--){
        int num;
        cout << "Enter the " << q + 1 << " number you want to search : ";
        cin >> num;
        //fetch
        cout << mpp[num] << endl;
    }

    
    return 0;
}