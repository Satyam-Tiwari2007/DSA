#include <iostream>
using namespace std;
int main(){
    int p,q;
    cout<<"Enter your first number : ";
    cin>>p;
    cout<<"Enter your Second number : ";
    cin>>q;
    for(int i = min(p,q);i>=1;i--){
        if(p%i==0&&q%i==0){
            cout<<i<<" is the GCD of "<<p<<" " << q;
            break;
        }
    }
return 0;
}
