#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=4;i++){
        int mini=i;
        for(int j=i;j<=5;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}
int main(){
    int arr[6]={19,20,1,2,10,7};
    cout<<"After sorting"<<endl;
    selection_sort(arr,6);
    for(int i=0;i<6;i++) cout<<arr[i]<<endl;
    return 0;
}