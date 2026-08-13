#include <iostream>
using namespace std;
void natural(int i,int n){
    if(i>n){return;}
    cout<<i<<" ";
    natural(i+1,n);
}
int main(){
    int N;
    cout<<"Enter value of N : ";
    cin>>N;
    natural(1,N);
    return 0;

}