#include<iostream>
using namespace std;
void Recursive_Bubble_Sort(int arr[],int n){
    if(n==1){
        return;
    }
    int count = 0;
    // One pass of bubble sort. After
    // this pass, the largest element is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            count++;
        }
    }
    //check if any swapping occur or not
    if(count==0) return;

     // Largest element is fixed, recur for remaining array
    Recursive_Bubble_Sort(arr, n-1);
}
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n=sizeof(arr)/sizeof(arr[0]);
    Recursive_Bubble_Sort(arr,n);
    cout<<"After Sorting ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}