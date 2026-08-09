#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    if(n<=1){
        cout<<"Not a prime number";
    }
    bool isprime = true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"prime number";
    }
    else{
        cout<<"Not a prime number";
    }
    
}