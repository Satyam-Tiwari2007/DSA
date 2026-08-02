#include <iostream>
using namespace std;
void pattern1(int n) {
    for (int i = 0; i <n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n - i; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }
}
void pattern3(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <=i; j++) {
            cout << j+1;
        }
        
        cout << endl;
    }
}
void pattern4(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void pattern6(int n){
    int star=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
        star+=2;
    }
}
void pattern7(int n){
    int star=2*n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<+i;j++){
            cout<<" ";
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
        star -=2;
}
}
void pattern8(int n){
    pattern6(n);
    pattern7(n);
}
void pattern9(int n){
    for(int i=0;i<2*n-1;i++){
        int star =0;
        if(i<=n-1){
            star=i+1;

        }
        if(i>n-1){
            star=2*n-1-i;
        }
        
        for(int j =0;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    //pattern1(n);
    //pattern2(n);
    //pattern3(n);
    //pattern4(n);
    //pattern5(n);
    //pattern6(n);
    //pattern7(n);
    //pattern8(n);
    //pattern9(n);

    return 0;
} 