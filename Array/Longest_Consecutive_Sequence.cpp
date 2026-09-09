#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums,int n) {
        
        if(n <=0){
            return 0;
        }
        unordered_set<int> st;
        int cnt = 0;
        int length = 1;
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                cnt =1;
                int x =it;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt=cnt+1;
                }
                length = max(length,cnt);

            }
        }
        return length;
        
    }
};
int main(){
    cout<<"Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.";
    cout<<endl<<"Enter size of  array : ";
    int n;
    cin>>n;
    vector <int> arr;
    cout<<"Enter element of array  : ";
    for(int i =0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    
    Solution s1;
    cout<<s1.longestConsecutive(arr,n);
    

}