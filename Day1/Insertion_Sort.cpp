#include<iostream>
using namespace std;
void Insertion_Sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        while(j>=0 && arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
        }
        
    }
}
int main(){
    int arr[7]={14,9,15,12,6,8,13};
    cout<<"Before Using Sorting "<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Insertion_Sort(arr,7);
    cout<<"After Sorting "<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}