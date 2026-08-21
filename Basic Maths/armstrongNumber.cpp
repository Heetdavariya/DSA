#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int n,c=0,an=0;
    cout << "Enter the Number : ";
    cin >> n;
    int un=n,un2=n;

    while(un2!=0){
        c=c+1;
        un2 = un2/10;
    }
    while(n!=0){
        int ld = n%10;
        an += pow(ld,c);
        n = n/10;
    }
    
    if(un == an){
        cout << "Inputted number is an armstrong number.";
    }else{
        cout << "Inputted number is NOT an armstrong number.";

    }
    
    return 0;
}