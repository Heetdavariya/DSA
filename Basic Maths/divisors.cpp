#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout << " " << i;
    //     }
    // }
    vector<int>v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i != i)
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    for(auto it : v){
        cout << " " << it;
    }
    

    return 0;
}