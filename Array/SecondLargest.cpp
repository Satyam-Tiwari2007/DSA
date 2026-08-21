#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max = arr[0];
        int smax = INT_MIN;
        for (int i=1;i<arr.size();i++){
            if(arr[i]>max){
                smax=max;
                max=arr[i];
            }
            else if(arr[i]>smax && arr[i]!=max){
                smax=arr[i];
            }
        }
        return (smax == INT_MIN)?-1:smax;
        
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
    cout<<" Second largest element is : ";
    cout<<s1.getSecondLargest(arr);
}