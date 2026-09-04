#include<bits/stdc++.h>
using namespace std;
class solution{
    public: 
    int kadane(vector<int> & arr,int n){
        int subarrStart=0;
        int subarrayEnd=0;
        int start =0;
        int sum = 0;
        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            if(sum ==0){
               int start = arr[i];
            }
            sum += arr[i];
            if(sum>maxi){
                subarrStart= start;
                subarrayEnd = i;
                maxi = sum;
            }
            if (sum<0){
                sum =0;
            }

        }
        cout<<"[";
        for(int i = subarrStart;i<=subarrayEnd;i++){
        
            cout<<arr[i]<<" ";
            
        }
        cout<<"]"<<endl;
        return maxi;
     }
};
int main(){
    cout<<"Enter size of  array : ";
    int n;
    cin>>n;
    vector <int> arr;
    cout<<"Enter element of array  : ";
    for(int i =0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    
    solution s1;
    cout<<"Found the subarray with the largest sum"<<endl;
  
    cout<<" subarray which contain maximum sum and sum of the elements present in that subarray is "<<s1.kadane(arr,n);
    

}