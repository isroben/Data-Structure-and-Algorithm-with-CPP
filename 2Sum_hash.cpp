#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int,int> m;
    vector<int> ans;

    for(int i=0; i<nums.size(); i++){
        int first = nums[i];
        int second = target - first;

        if(m.find(second) != m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            return ans;
        }
        m[first] = i;
    }
    return {};
}

int main(){
    vector<int> arr = {2, 7, 11, 15};
    int tar = 9;

    cout<<twoSum(arr, tar)[0]<<" "<<twoSum(arr, tar)[1]<<endl;

    return 0;
}