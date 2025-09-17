#include<iostream>
using namespace std;
void solve1(int arr[],int n){
    //using extra space
    int temp[n];
    for(int i=1;i<n;i++){
        temp[i-1]=arr[i];
    }
    temp[n-1]=arr[0];
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}
void solve2(int arr[],int n){
    int first=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=first;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[]= {1,2,3,4,5};
    //aproach 1
    //solve1(arr, n);
    //Approach 2
    solve2(arr,n);
    return 0;
}