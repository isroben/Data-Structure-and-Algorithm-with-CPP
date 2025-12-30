#include<iostream>
#include<vector>
using namespace std;

/* Given a non-empty array of integers "num", every element appears twice except for one. Find that single one. */

int singleNumber(vector<int>& nums){
    int ans = 0;

    for(int val: nums){
        // To solve linear runtime complexity, we can use Bitwise XOR.
        ans ^= val;
    }

    return ans;
}


int  main(){
    vector<int> nums = {4, 2, 1, 1, 2};

    cout<<singleNumber(nums)<<endl;
}