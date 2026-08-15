#include<bits/stdc++.h>
using namespace std;
void reverse(int left,int right,int arr[]){
    if(left>=right){
        return;
    }
    int temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
    reverse(left+1,right-1,arr);
}
int main(){
    int n;
    int arr[n];
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter your array element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}