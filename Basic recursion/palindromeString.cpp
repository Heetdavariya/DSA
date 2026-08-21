//BY ME

#include<bits/stdc++.h>
using namespace std;
// void isPalindrome(int l,int r,string s,int *n){
//     if(l>=r){
//         return;
//     }
//     if(s[l]!=s[r]){
//         *n=0;
//         return;
//     }else{
//         *n=1;
//     }
//     isPalindrome(l+1,r-1,s,n);
// }
// int main(){

    // string s;
    // int n = 1;
    // cout << "Enter the string to check palindrome : ";
    // cin >> s;
    // isPalindrome(0,s.length()-1,s,&n);
//     if(n){
//         cout << "Inputted string is palindrome";
//     }else{
//         cout << "Inputted string is NOT palindrome";
//     }
//     return 0;
// }

// BY STRIVER
bool isPalindrome(int i,string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return isPalindrome(i+1,s);
}
int main(){

    string s;
    cout << "Enter the string to check palindrome : ";
    cin >> s;
    cout << isPalindrome(0,s);

    return 0;
}