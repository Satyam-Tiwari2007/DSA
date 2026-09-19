#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i =0;i<n-3;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            for(int j =i+1;j<n-2;j++){
                if(j>i+1&&nums[j]==nums[j-1])continue;
                int k=j+1;
                int l=n-1;
                long long sum =0;
                while(k<l){
                    sum = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum>target)l--;
                    else if(sum<target)k++;
                    else{
                        vector <int>temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l&&nums[k]==nums[k-1])k++;
                        while(k<l&&nums[l]==nums[l+1])l--;


                    }

                }
            }
        }
        return ans;
        
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
  vector<vector<int>> answer = s1.fourSum(arr,target);
  for (auto &quad : answer) {
    for (int x : quad) {
        cout << x << " ";
    }
    cout << endl;
}
}