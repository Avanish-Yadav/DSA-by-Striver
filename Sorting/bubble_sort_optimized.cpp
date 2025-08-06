#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didSwap=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap=0){
            break;
        }
        cout<<"Runs"<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++) cin>>arr[i];   
    bubble_sort(arr,n);
    cout<<"The result of bubble sort is - "<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
//The result of bubble sort is -
//5 9 12 14 23
