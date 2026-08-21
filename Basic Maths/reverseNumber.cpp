#include<iostream>
using namespace std;
int main(){

    int n,rn=0;
    cout << "Enter the Number : ";
    cin >> n;

    while(n!=0){
        int last_digit = n%10;
        rn = (rn*10)+last_digit;
        n = n/10;
    }
    cout << "Reverse of the given number is : " << rn;
    return 0;
}