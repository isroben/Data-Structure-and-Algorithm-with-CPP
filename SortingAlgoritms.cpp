#include<iostream>
using namespace std;

void bubbleSort(int arr[5]){  // O(n^2)
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

void selectionSort(int arr[5]){  // O(n^2)
    for(int i=0; i<5; i++){
        int smallestidx = i;
        for(int j=i+1; j<5; j++){
            if(arr[j] <= arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(arr[i], arr[smallestidx]);
    }

    for(int i=0; i<5; i++){
    cout<<arr[i];
    }

    return;
}

void insertionSort(int arr[5]){
    for(int i=1; i<5; i++){
        int curr = arr[i];
        int prev = i-1;
        
        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
            cout<<prev<<endl;
        }
        arr[prev+1] = curr;
    }

    for(int i=0; i<5; i++){
    cout<<arr[i];
    }

    return;
}

int main(){
    int arr[] = {4, 1, 5, 2, 3};

    // bubbleSort(arr);
    // selectionSort(arr);
    insertionSort(arr);

    return 0;
}