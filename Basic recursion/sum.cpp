#include<bits/stdc++.h>
using namespace std;
int fsum(int n,int sum){
    if(n<0) return sum;
    sum = sum + n;
    fsum(n-1,sum);
}
int main(){

    int n,sum=0;
    cout << "Enter the number : ";
    cin >> n;
    
    cout << "Sum of the first " << n << " numbers is " << fsum(n,sum);

    return 0;
}