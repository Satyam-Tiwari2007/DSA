#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum =0;
        int cnt =0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            if(mp.find(sum-k)!=mp.end()){
                cnt = cnt + mp[sum-k];

            }
            mp[sum] +=1;


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
    int k;
    cout<<"Enter valur of k : ";
    cin>>k;
    Solution s1;
    cout<<s1.subarraySum(arr,k);

}