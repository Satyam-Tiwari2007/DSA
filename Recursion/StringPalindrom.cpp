#include<bits/stdc++.h>
using namespace std;
bool plin(string s,int left,int right){
    if(left>=right){
        return true;
    }
    if(s[left]!=s[right]){
        return false;
    }
    return plin(s,left+1,right-1);
}
int main(){
    string s;
    cout<<"Enter your string : ";
    cin>>s;
    cout<<plin(s,0,s.size()-1);

}