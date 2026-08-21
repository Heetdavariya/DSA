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
    // for main func maximum array size can be 10^6. 
    // for global func maximum array size can be 10^7.
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter howmany numbers you want to search : ";
    cin >> q;
    while(q--){
        int num;
        cout << "Enter the " << q + 1 << " number you want to search : ";
        cin >> num;
        //fetch
        cout << hash[num] << endl;
    }

    
    return 0;
}