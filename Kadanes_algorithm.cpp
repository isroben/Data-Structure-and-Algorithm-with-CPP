#include<iostream>
#include<vector>
using namespace std;

int maxSum_of_subarray(){   // Most optimized O(n).
    int n = 7, currSum = 0, maxSum=INT32_MIN;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum<0){
            currSum = 0;
        }
    }

    return maxSum;
}

int main(){
    cout<<maxSum_of_subarray();

    return 0;
}