#include<bits/stdc++.h>
using namespace std;
int quick(int arr[],int low,int high){
    int i=low;
    int j=high;
    int pivat = arr[low];
    while(i<j){
        while(arr[i]<=pivat && i<=high-1){
            i++;
            while(arr[j]>pivat && j>=low+1) j--;
            if(i<j) swap(arr[i],arr[j]);
        } 
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick_sort(int arr[],int low,int high){
    if(low>high) return;
    int pindex = quick(arr,low,high);
    quick_sort(arr,low,pindex-1);
    quick_sort(arr,pindex+1,high);
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

    quick_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}