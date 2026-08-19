#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    unordered_map<int,int> hashh;
    //we can also use map only.
    cout<<"Enter your array : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
        hashh[arr[i]]++;
    }

    int q;
    cout<<"Enter number of quaries :  ";
    cin>>q;
    for(int i = 0;i<q;i++){
        int num;
        cin>>num;
        
        cout<<num<<"-->"<<hashh[num];
    }
}



/***************************************************************************************************
 **************************************HASHING USING ARRAY******************************************
 */


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     int arr[n];

//     //we can also use map only.
//     cout<<"Enter your array : ";
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
        
//     }
//     int maxval;
//     cout<<"Enter maximum value of that array : ";
//     cin>>maxval;
//     int hashh[maxval+1]={0};
//     for(int i =0;i<n;i++){
//         hashh[arr[i]]++;
//     }



//     int q;
//     cout<<"Enter number of quaries :  ";
//     cin>>q;
//     for(int i = 0;i<q;i++){
//         int num;
//         cin>>num;

//         if(num<=maxval && num>=0){
//         cout<<num<<"-->"<<hashh[num];
//         }
//         else{
//         cout<<num<<"-->"<<"0";
//         }
//     }
// }