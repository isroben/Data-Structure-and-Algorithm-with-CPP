#include<iostream>
#include<vector>
using namespace std;

bool SearchInMatrix(vector<vector<int>> &nums, int target){
    int m = nums.size(), n = nums[0].size();
    int r = 0, c = n-1;
    
    while(c >= 0 && r < m){
        if(target == nums[r][c]) return true;
        else if(target < nums[r][c]){
            c--;
        }
        else{
            r++;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> nums = {{1,4,7,11,15},
                                {2,5,8,12,19},
                                {3,6,9,16,22},
                                {10,13,14,17,24},
                                {18,21,23,26,30}};
    int target = 5;

    cout<<SearchInMatrix(nums, target);

    return 0;
}