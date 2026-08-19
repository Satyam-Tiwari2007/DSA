#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    unordered_map<int,int> hashh;
    cout<<"Enter your array : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
        hashh[arr[i]]++;
    }

    int q;
    cout<<"Enter number of quaries :  ";
    cin>>q;
    for(int i = 0;i<q;i++){
        int num;
        cin>>num;
        
        cout<<num<<"-->"<<hashh[num];
    }
}