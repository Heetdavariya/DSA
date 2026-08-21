#include<bits/stdc++.h>
using namespace std;

void printN(int n){
    if(n<=0) return;
    cout << n << endl;
    printN(n-1);
}

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;
    printN(n);

    return 0;
}