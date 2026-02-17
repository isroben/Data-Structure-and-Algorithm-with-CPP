#include<iostream>
#include<vector>
using namespace std;

vector<int> SpiralMatrix(vector<vector<int>> &nums){
    int m = nums.size(), n = nums[0].size();
    int srow = 0, erow = m-1;
    int scol = 0, ecol = n-1;
    vector<int> ans;

    while(srow <= erow && scol <= ecol){
        for(int j=scol; j<= ecol; j++){
            ans.push_back(nums[srow][j]);
        }
        for(int i=srow; i<=erow; i++){
            ans.push_back(nums[i][ecol]);
        }
        for(int j=ecol-1; j<=scol; j++){
            ans.push_back(nums[erow][j]);
        }
        for(int i=erow-1; i<= srow+1; i++){
            ans.push_back(nums[i][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return ans;
}