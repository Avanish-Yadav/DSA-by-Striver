#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++) cin>>arr[i];   
    insertion_sort(arr,n);
    cout<<"The result of insertion sort is - "<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}

/*
T.C Worst O(n^2)
    Avg   O(n^2)
    Best  O(n)

    Exp- 1 2 3 4 5
    No swaps happend
*/