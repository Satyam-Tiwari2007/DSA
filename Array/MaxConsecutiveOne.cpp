#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1){
                count ++;
                maxcount = max(maxcount , count);
            }
            else{
            count = 0;
            }
        }
        return maxcount;
        
    }
};

int main(){
    cout<<"Enter number of element : ";
    int n;
    cin>>n;
    cout<<"Enter element of your arr in 1 or 0 form only : ";
    vector <int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);

    } 
    Solution s1;
    cout << s1.findMaxConsecutiveOnes(arr);
    
}