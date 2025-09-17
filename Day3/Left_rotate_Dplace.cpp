#include<iostream>
using namespace std;
void RotateToLeft(int arr[],int n,int k){
    int temp[n];
    int ind=0;
    for(int i=k;i<n;i++){
        temp[ind++]=arr[i];
    }
    for(int j=0;j<k;j++){
        temp[ind++]=arr[j];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}
//Approach 2- Reversal Algoritham
void reverse(int arr[],int start,int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++,end--;
    }
}
void RotateTOLeft2(int arr[],int n,int k){
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    //After D place Left reverse
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 10;
    k=k%n;
    //Approach 1
    //RotateToLeft(arr,n,k);
    //Approach 2
    RotateTOLeft2(arr,n,k);
    return 0;
}