#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMaxSum(int mat[][3], int rows, int cols){
    int maxRowSum = INT32_MIN;

    for(int j=0; j<cols; j++){
        int rowSum = 0;
        for(int i=0; i<rows; i++){
            rowSum += mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    
    return maxRowSum;
}

int main(){
    int matrix[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows = 3, cols = 3;

    cout<<getMaxSum(matrix, rows, cols)<<endl;

    return 0;
}