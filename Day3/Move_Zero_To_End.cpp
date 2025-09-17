#include<iostream>
#include<vector>
using namespace std;
vector<int> moveZeros(int n,vector<int> &arr){
    vector<int> ans(n);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            ans.push_back(arr[i]);
        }else{
            count++;
        }
    }
    while(count--){
        ans.push_back(0);
    }
    return ans;
}
//Two pass
vector<int> moveZeros2(int n,vector<int> &arr){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int k=j;k<n;k++){
        arr[k]=0;
    }
    return arr;
}

vector<int> moveZeros3(int n,vector<int> &arr){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}
int main(){
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    //Approach 1
    //vector<int> ans = moveZeros(n, arr);
    //Approach 2- Two pass
    //vector<int> res=moveZeros2(n,arr);
    vector<int> res2=moveZeros3(n,arr);
    cout<<"After Moving "<<endl;
    for(int i=0;i<n;i++){
        cout<<res2[i]<<" ";
    }
    return 0;
}