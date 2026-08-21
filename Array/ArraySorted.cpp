#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1]){
                return false;
            }
        }
        return true;
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
    cout<<"largest element is : ";
    cout<<s1.isSorted(arr);
}