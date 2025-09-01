#include<iostream>
using namespace std;
void Bubble_Sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[6]={13,46,24,52,20,9};
    Bubble_Sort(arr,6);
    cout<<"After Sorting ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}