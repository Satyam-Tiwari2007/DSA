#include<bits/stdc++.h>
using namespace std;
class solution{
    public: 
    void DNF(vector<int> & arr){
       int low =0;
       int mid =0;
       int high = arr.size()-1;
       while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
       }
    }
        

};
int main(){
    cout<<"Enter size of  array : ";
    int n;
    cin>>n;
    vector <int> arr;
    cout<<"Enter element of array only 0,1,2 is allowed : ";
    for(int i =0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    cout<<"Array after sorting 0's , 1's and 2's : ";
    solution s1;
    s1.DNF(arr);
    for(int x:arr){
        cout<<x<<" ";
    }

}