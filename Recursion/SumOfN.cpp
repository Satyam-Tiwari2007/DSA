#include<bits/stdc++.h>
using namespace std;
void sumN(int i,int n,int sum){
    if(i>n){
        cout<<sum;
        return;
    }
    sumN(i+1,n,sum+i);

}
int main(){
    int N;
    cout<<"Enter Value of N : ";
    cin>>N;
    sumN(1,N,0);

}