#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void spiral(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>ans;
        int top =0;
        int bottom = m-1;
        int left =0;
        int right = n-1;
        while(left<=right&&top<=bottom){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i =right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
        }
        bottom--;
        if(left<=right){
            for(int i = bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
        }
        left++;
        }
        for(int x : ans){
            cout<<x<<" ";
        }
        
    }
};
int main(){
    cout<<"Given an m x n matrix, return all elements of the matrix in spiral order.";
    int n;
    int m;
    cout<<"Enter size of row of matirx : ";
    cin>>m;
    cout<<"Enter size of column of matirx : ";
    cin>>n;
    vector<vector<int>> matrix( m,vector<int>(n));
    cout<<"Enter element of matrix of size "<<m<<"*"<<n <<": ";
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cin>>matrix[i][j];
        }
        
    }
    
    Solution s1;
    s1.spiral(matrix);
    
}