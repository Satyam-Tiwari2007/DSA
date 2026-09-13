#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0) break;
            if(i>0&&nums[i]==nums[i-1]) continue;
            int j = i+1;
            int k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0) k--;
                else if(sum<0) j++;
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    j++;
                    k--;
                    while(j<k&&nums[j]==nums[j-1])j++;
                    while(j<k&&nums[k]==nums[k+1])k--;
                    ans.push_back(temp);

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
  Solution s1;
  vector<vector<int>> answer = s1.threeSum(arr);
  for (auto &triplet : answer) {
    for (int x : triplet) {
        cout << x << " ";
    }
    cout << endl;
}
}
}
