#include<iostream>
#include<vector>
using namespace std;

vector<int> SpiralMatrix(vector<vector<int>> &nums){
    int m = nums.size(), n = nums[0].size();
    int srow = 0, erow = m-1;
    int scol = 0, ecol = n-1;
    vector<int> ans;

    while(srow <= erow && scol <= ecol){
        // Top
        for(int j=scol; j<= ecol; j++){
            ans.push_back(nums[srow][j]);
        }
        // right
        for(int i=srow+1; i<=erow; i++){
            ans.push_back(nums[i][ecol]);
        }
        // bottom
        for(int j=ecol-1; j>=scol; j--){
            if(srow == erow) break;
            ans.push_back(nums[erow][j]);
        }
        // left
        for(int i=erow-1; i>=srow+1; i--){
            if(scol == ecol) break;
            ans.push_back(nums[i][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return ans;
}

int main(){
    vector<vector<int>> nums = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    vector<int> ans = SpiralMatrix(nums);

    for(int i=0; i<=ans.size(); i++){
        cout<<i<<" ";
    }

    return 0;
}