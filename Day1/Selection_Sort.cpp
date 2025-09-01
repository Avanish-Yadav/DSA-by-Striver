#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}
int main(){
    int arr[6]={13,46,24,52,20,9};
    selection_sort(arr,6);
    cout<<"After Sorting ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}