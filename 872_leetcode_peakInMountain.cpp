#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int st = 1, end = arr.size() - 2;

    while(st<=end){
        int mid = st + (end - st)/2;

        if(arr[mid-1] < mid && mid > arr[mid + 1]) return mid;
        else if(arr[mid-1] < arr[mid]){
            st = mid + 1; // right
        }
        else{
            end = mid - 1; // left
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {0,10,5,2};

    cout<<peakIndexInMountainArray(arr)<<endl;

    return 0;
}