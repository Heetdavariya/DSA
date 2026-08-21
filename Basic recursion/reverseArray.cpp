#include<bits/stdc++.h>
using namespace std;
void reverse_arr(int l,int r,int a[]){
    if(l>=r) return;
    swap(a[l],a[r]);
    reverse_arr(l+1,r-1,a);
}
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        cout << "Enter " << i+1 << " number of array : ";
        cin >> a[i];
    }

    reverse_arr(0,n-1,a);
    cout << "Reverse of your array is : ";
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}