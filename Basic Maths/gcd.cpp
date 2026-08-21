#include<bits/stdc++.h>
using namespace std;
int main(){

    int n1,n2;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;

    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }else{
            n2=n2%n1;
        }
    } 
    if(n1==0){
        cout << "GCD of inuppted number is " << n2;
    }else{
      cout << "GCD of inuppted number is " << n1;
    }

    return 0;
}