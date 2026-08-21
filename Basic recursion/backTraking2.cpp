#include<bits/stdc++.h>
using namespace std;

void printN(int n,int c){
    if(n<=0) return;
    c++;
    printN(n-1,c);
    cout << c << endl;
}

int main(){

    int n,c=0;
    cout << "Enter the number : ";
    cin >> n;
    printN(n,c);

    return 0;
}