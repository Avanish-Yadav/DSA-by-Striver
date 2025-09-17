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
int main(){
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    cout<<"After Moving "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}