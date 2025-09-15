#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}
void get_Elements2(int arr[],int n){
    if(n==0 || n==-1)
        cout<<-1<<" "<<-1<<endl;//edge case
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"max "<<maxi<<" min "<<mini<<endl;
    int secondMaxi=INT_MIN,secondMini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>secondMaxi && arr[i]!=maxi){
            secondMaxi=arr[i];
        }
        if(arr[i]<secondMini && arr[i]!=mini){
            secondMini=arr[i];
        }
    }
    cout<<"Second max "<<secondMaxi<<" Second min "<<secondMini<<endl;
}
void get_Element3(int arr[],int n){
    if(n==0 || n==1){
        cout<<-1<<" "<<-1<<endl;//edge case
    }
    int maxi=INT_MIN,secondMaxi=INT_MIN,mini=INT_MAX,secondMini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            secondMaxi=maxi;
            maxi=arr[i];
        }else if(arr[i]>secondMaxi){
            secondMaxi=arr[i];
        }
        if(arr[i]<mini){
            secondMini=mini;
            mini=arr[i];
        }else if(arr[i]<secondMini){
            secondMini=arr[i];
        }
    }
    cout<<"Second max "<<secondMaxi<<" Second min "<<secondMini<<endl;
}
int main(){
    int arr[]={7,2,4,6,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    //Approach 1
    //Solution 1: (Brute Force) [this approach only works if there are no duplicates]
    //getElements(arr,n);
    //Approach 2
    //Solution 2(Better Solution)
    //get_Elements2(arr,n);
    //Approach 3(Optimal-Single loop)
    get_Element3(arr,n);
    return 0;
}