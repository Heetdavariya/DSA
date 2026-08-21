#include<bits/stdc++.h>
using namespace std;

void merg(int arr[],int low,int mid,int high){
    int left = low;
    int right = mid+1;
    vector<int>v;
    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            v.push_back(arr[left]);
            left++; 
        }else{
            v.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        v.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        v.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = v.at(i-low);
    }
}
void merge_short(int arr[],int low,int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    merge_short(arr,low,mid);
    merge_short(arr,mid+1,high);
    merg(arr,low,mid,high);
}
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin  >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter " << i+1 << " number of array : ";
        cin >> arr[i];
    }

    merge_short(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}