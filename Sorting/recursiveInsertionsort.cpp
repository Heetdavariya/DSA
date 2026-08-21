#include<bits/stdc++.h>
using namespace std;
void risort(int arr[],int n){
    if(n == 1) return;
    risort(arr,n-1);
    int i=n-2;
    int last = arr[n-1];
    while(i>=0 && arr[i]>last){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = last;
}
int main(){

    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter " << i+1 << " number of an array : ";
        cin >> arr[i];
    }

    risort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}