#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout << "Enter a string : ";
    cin >> s;

    //precompute
    int hash[256] = {0};
    for(char c : s){
        hash[c]++;
    }

    int q;
    cout << "Enter howmany characters you want to search : ";
    cin >> q;
    while(q--){
        char c;
        cout << "Enter the " << q + 1 << " character you want to search : ";
        cin >> c;
        //fetch
        cout << hash[c] << endl;
    }

    
    return 0;
}