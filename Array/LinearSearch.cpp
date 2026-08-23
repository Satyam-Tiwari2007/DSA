
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int i = -1;
        for(int j =0;j<arr.size();j++){
            if(arr[j]==x){
                i = j;
                break;
            }
            
        }
        return i;
    }
};

int main(){
    cout<<"Enter size of arr : ";
    int n;
    cin>>n;
    cout<<"Enter element of your arr : ";
    vector <int> arr;
    for(int i =0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);

    } 
    cout<<"Enter the element you want to search : ";
    int x;
    cin>>x;

    Solution s1;
    cout<<"index of given element is ";
    cout<<s1.search(arr,x);
    
}