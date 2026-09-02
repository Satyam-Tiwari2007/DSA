#include<bits/stdc++.h>
using namespace std;
class solution{
    public: 
    int longestSubarrayWithSumK (vector<int> & arr, int k){
        int maxlength =0;
        int sum =0;
        unordered_map<int,int>mp;
        for(int i =0;i<arr.size();i++){
            sum += arr[i];
            if(sum == k){
                maxlength = i+1;
            }
            if(mp.find(sum-k)!=mp.end()){
                int lng = i- mp[sum-k];
                maxlength = max(maxlength,lng);

            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }

        }
        return maxlength;
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
    int k;
    cout<<"Enter valur of k : ";
    cin>>k;
    solution s1;
    cout<<s1.longestSubarrayWithSumK(arr,k);

}