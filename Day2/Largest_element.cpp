#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 //Aproach 1
int Using_Sorting(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
//Aproach 2 
int Using_Max_Variable(vector<int> &arr){
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int main(){
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
    int maxi=Using_Sorting(arr1);
    cout<<"Max element is "<<maxi<<endl;
    int maximum=Using_Max_Variable(arr2);
    cout<<"Maximum is "<<maximum<<endl;
}