#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
}
void right_rotate(int arr[],int n,int k){
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    k=k%n;
    //Approach 1
    right_rotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}