#include<iostream>
#include<vector>
using namespace std;

void subArray(){
    int n = 5;
    int arr[5] = {2, 4, 6, 8, 10};

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return;
}

void max_subarr_sum(){  // Brute Force Approach
    int maxSum = INT32_MIN, currSum=0;
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout<<"Max subarray sum = "<<maxSum <<endl;

    return;
}

int main(){
    subArray();

    return 0;
}