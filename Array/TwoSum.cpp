#include<bits/stdc++.h>
using namespace std;
class solution{
    public: 
    bool twoSum (vector<int> & arr, int target){
        unordered_set<int> s;
        
        for(int i =0;i<arr.size();i++){
            
            if(s.find(target-arr[i])!=s.end()){
                return true;
            }
            s.insert(arr[i]);

        }
        return false;
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
    int target;
    cout<<"Enter valur of target : ";
    cin>>target;
    solution s1;
    if(s1.twoSum(arr,target)){
        cout<<"YES !! There Exist Two number in array whose sum is equal to target";
    }
    else{
        cout<<" NO ! There are no Two number in array whose sum is equal to target";
    }

}