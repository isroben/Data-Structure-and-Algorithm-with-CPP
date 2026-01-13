#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf_bruteforce(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n, 1);

    for(int i=0; i<n; i++){
        int prod = 1;
        for(int j=0; j<n; j++){
            if(i!=j){
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }
    return ans;
}

vector<int> productExceptSelf_semiOptim(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    for(int i=0; i<n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    for(int i=0; i<n; i++){
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;

}



int main(){
    vector<int> nums = {1,2,3,4};

    vector<int> ans = productExceptSelf_semiOptim(nums);

    for(int i=0; i<4; i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}