#include<bits/stdc++.h>
using namespace std;
int factorial(int n,int f){
    if(n<=0) return f;
    f = f * n;
    factorial(n-1,f);
}
int main(){

    int n,f=1;
    cout << "Enter the number : ";
    cin >> n;
    
    cout << "Factorial of " << n << " is " << factorial(n,f);

    return 0;
}