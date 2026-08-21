#include<bits/stdc++.h>
using namespace std;
void printName(int c,int n,string name){
    if(c>n){
        return;
    }
    cout << c << " " << name << endl;
    c++;
    printName(c,n,name);
}
int main(){

    int n,c=1;
    string name;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter howmany times you want to print it : ";
    cin >> n;
    printName(c,n,name);


    return 0;
}