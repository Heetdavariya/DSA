#include<bits/stdc++.h>
using namespace std;
void rbsort(int arr[],int n){
    if(n<=1) return;
    bool is_swapped = false;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            is_swapped = true;
        }
    }
    if(!is_swapped) return;
    rbsort(arr,n-1);
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

    rbsort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}