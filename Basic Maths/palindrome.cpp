#include<iostream>
using namespace std;
int main(){
     
    int n,rn=0,ld;
    cout << "Enter any number : ";
    cin >>n;

    int un = n;

    while(n!=0){
        ld=n%10;
        rn=(rn*10) + ld;
        n=n/10;
    }
    if(rn == un){
        cout << "Inputted number is palindrome";
    }else{
        cout << "Inputted number is NOT palindrome";
    }

    return 0;
}