#include<bits/stdc++.h>
using namespace std;
void revsnum(int n){
    if(n<1)return;
    cout<<n<<" ";
    revsnum(n-1);

}
int main(){
    int N;
    cout<<"Enter the value of N : ";
    cin>>N;
    revsnum(N);

}