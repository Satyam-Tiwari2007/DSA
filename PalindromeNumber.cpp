#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int orgnum=n;
    int digit;
    int newdig = 0;
    while(n>0){
        digit = n%10;
        newdig = (newdig*10)+digit;
        n=n/10;
    }
    if(newdig==orgnum){
        cout<<"The number is a palindrome number ";

    }
    
    return 0;
}