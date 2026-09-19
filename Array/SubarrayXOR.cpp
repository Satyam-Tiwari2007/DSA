#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int xr=0;
           int cnt =0;
           unordered_map<int,int>mpp;
           for(int i =0;i<arr.size();i++){
               xr=xr^arr[i];
               if(xr==k) cnt++;
               if(mpp.find(xr^k)!=mpp.end()){
                   cnt=cnt+mpp[xr^k];
               }
               mpp[xr]++;

           }
           return cnt;
    }
};
int main(){
    cout<<"Enter size of  array : ";
    int n;
    cin>>n;
    vector <int> arr;
    cout<<"Enter element of array : ";
    for(int i =0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    cout<<"enter target : ";
    int target;
    cin>>target;
  Solution s1;
  cout<<s1.subarrayXor(arr,target);
  
}