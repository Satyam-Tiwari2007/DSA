#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZero(vector<int>& nums) {
        int j =-1;
        for(j = 0;j<nums.size();j++){
            if(nums[j]==0){
                break;
            }
        }
        if(j == -1){
            return;
        }
        for(int i =j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
    }
};

int main(){
    cout<<"Enter number of element : ";
    int n;
    cin>>n;
    cout<<"Enter element of your arr : ";
    vector <int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);

    } 
    Solution s1;
    s1.moveZero(arr);
    for(int x : arr){
        cout<<x<<" ";

    }
}