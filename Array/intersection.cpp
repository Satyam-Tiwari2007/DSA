
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        vector <int> temp;
        int i =0;
        int j =0;
        while(i<arr1.size()&&j<arr2.size()){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr2[j]<arr1[i]){
                j++;
            }
            else {
                if(temp.empty()||temp.back() != arr1[i])
                temp.push_back(arr1[i]);
                
                i++;
                
                j++;
            }
            
                
            
        }
        for(int x : temp){
            cout<<x<<" ";
        }
        
    }
};

int main(){
    cout<<"Enter number of element of arr1 : ";
    int n1;
    cin>>n1;
    cout<<"Enter element of your arr1 in sorted order : ";
    vector <int> arr1;
    vector <int> arr2;
    for(int i=0;i<n1;i++){
        int num;
        cin>>num;
        arr1.push_back(num);

    } 
    cout<<"Enter number of element of arr2 : ";
    int n2;
    cin>>n2;
    cout<<"Enter element of your arr2 in sorted order : ";
    
    for(int i=0;i<n2;i++){
        int num;
        cin>>num;
        arr2.push_back(num);

    } 
    Solution s1;
    s1.intersection(arr1 , arr2);
    
}