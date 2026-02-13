#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> searchInRow(vector<vector<int>> &matrix, int target, int row){
    int n = matrix[0].size();
    int st = 0, end = n-1;
    vector<int> ans = {};

    while(st <= end){
        int mid = st + (end-st)/2;
        if(target == matrix[row][mid]){
            ans.push_back(row);
            ans.push_back(mid);
            return ans;
        }
        else if(target > matrix[row][mid]){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return {-1};
}


vector<int> SearchMatrix(vector<vector<int>> &matrix, int target){
    int m = matrix.size(), n = matrix[0].size();

    int stRow = 0, edRow = m-1;

    while(stRow <= edRow){
        int midRow = stRow + (edRow-stRow)/2;

        if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
            return searchInRow(matrix, target, midRow);

        }
        else if (target >= matrix[midRow][n-1]){
            stRow = midRow + 1;
        }
        else{
            edRow = midRow - 1;
        }
        
    }
    return {-1};
}

int main(){

    vector<vector<int>> nums = {{1,3,5,7}, {10,11,16,20}, {23,30,24,60}};
    int tar = 11;

    cout<<SearchMatrix(nums, tar)[0]<<SearchMatrix(nums, tar)[1];

    return 0;
}