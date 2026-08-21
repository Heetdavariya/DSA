#include<iostream>
using namespace std;
int main(){

    int n,c=0;
    cout << "Enter the Number : ";
    cin >> n;
    while(n>0){
        c = c+1;
        n = n/10;
    }
    cout << "Total number of digits are " << c;
    return 0;
}