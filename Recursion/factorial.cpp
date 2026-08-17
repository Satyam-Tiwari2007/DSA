#include<bits/stdc++.h>
using namespace std;
void fact(int n,long long factorial){
    if(n<1){
        cout<<factorial;
        return;
    }
    fact(n-1,factorial*n);

}
int main(){
    int N;
    cout<<"Enter the value of N : ";
    cin>>N;
    fact(N,1);
}