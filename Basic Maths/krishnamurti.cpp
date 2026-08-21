#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int fact = 1;
    while(n>0){
        fact = fact*n;
        n--;
    }
    return fact;
}
bool krishna_murti(int n){
    int on = n,ls=0,kn=0;
    while(n%10 != 0){
        ls = n%10;
        n = n/10;
        kn = kn + fact(ls);
    }
    if(kn==on) return true;
    else return false;
}
int main(){

    int n;
    cout << "Enter any number : ";
    cin >> n;

    if(krishna_murti(n)) cout << "Inputted number is a krishnamurti number.";
    else cout << "Inputted number is NOT a krishnamurti number.";

    return 0;
}