#include<iostream>
using namespace std;

int findTarget(int nums[7], int target){
    int n = 7, st=0, end=n-1;
    
    while(st<=end){
        int mid = (st+end)/2;
        if(target > nums[mid]){
            st = mid + 1;
        }
        else if(target < nums[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr[7] = {-1, 0, 3, 4, 5, 9, 12};
    cout<<findTarget(arr, 12);

    return 0;
}