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
void pattern10(int n){
    for(int i=0;i<n;i++){
        int star=0;
        if(i%2==0){
            star=1;
        }
        
        for(int j=0;j<=i;j++){
            cout<<star;
            star=1-star;
            
        }
        cout<<endl;
    }
}
void pattern11(int n){
    int space=2*n-2;
        
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        int num=i+1;
        for(int j=0;j<i+1;j++){
            
            cout<<num;
            num-=1;
        }
        cout<<endl;
        space -=2;


    }
}
void pattern12(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void pattern13(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+n-i-1;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
   
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        char ch = 'A';
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            if(j<=(2*i+1)/2){
                ch++;
            }
            else{
                ch--;
            }
        }
        cout<<endl;

               
        }
    }
void pattern17(int n){
    
    for (int i=0;i<n;i++){
        for(char ch ='E'-i;ch<='E';ch++){
            cout<<ch;
        }
        cout<<endl;
    }
    
}
void pattern18(int n){
    for(int i=0;i<2*n;i++){
        if(i<n){
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            for(int j=0;j<2*i;j++){
                cout<<" ";
            }
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
        }
        if(i>=n){
            for(int j=0;j<i-n+1;j++){
                cout<<"*";
            }
            for(int j=0;j<2*(2*n-i-1);j++){
                cout<<" ";
            }
            for(int j=0;j<i-n+1;j++){
                cout<<"*";
            }

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
    //pattern10(n);
    //pattern11(n);
    //pattern12(n);
    //pattern13(n);
    //pattern14(n);
    //pattern15(n);
    //pattern16(n);
    //pattern17(n);
    pattern18(n);


    return 0;
} 