#include<iostream>
using namespace std;

void bubbleSort(int arr[5]){
    for(int i=0; i<4; i++){
        for(int j=0; j<5-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
    return;
}

int main(){
    int arr[] = {4, 1, 5, 2, 3};

    bubbleSort(arr);

    return 0;
}