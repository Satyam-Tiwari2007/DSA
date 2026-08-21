#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int i =0;
        
        for(int j =1;j<arr.size();j++){
            if(arr[j] !=arr[i]){
                i++;
                arr[i] = arr[j];
                
            }
        }
        arr.erase(arr.begin() + i +1 , arr.end());
        return arr;
    }
};
int main(){
    cout<<"Enter number of element : ";
    int n;
    cin>>n;
    cout<<"Enter element of your arr in sorted manner : ";
    vector <int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);

    } 
    Solution s1;
    cout<<"largest element is : ";
    arr = s1.removeDuplicates(arr);
    for(int x : arr){
        cout<< x << " ";
    }
}