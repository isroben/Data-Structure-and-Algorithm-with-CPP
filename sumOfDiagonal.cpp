#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int diagonalSum(int nums[][4], int rows, int cols){
    int sum = 0;
    // O(n*n)
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         if(i == j){
    //             sum += nums[i][i];
    //         }
    //         else if(j == cols-i-1){
    //             sum += nums[i][j];
    //         }

    //     }
    // }


    // O(n)
    for(int i=0; i<rows; i++){
        sum += nums[i][i];
        
        if(i != rows-i-1){
            sum += nums[i][rows-i-1];
        }
    }

    return sum;
}

int main(){
    int matrix[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12,}, {13,14,15,16}};

    cout<<diagonalSum(matrix, 4, 4);

    return 0;
}