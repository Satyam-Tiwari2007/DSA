#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int finalNum = n;
    int sum=0;
    while(n>0){
        int digit = n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(finalNum==sum){
        cout<<"Given number is amstrong number.";
    }
    else{cout<<"Given number is not amstrong number. ";}
    return 0;

    
}