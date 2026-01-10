#include<iostream>
using namespace std;

int recFibonacci(int n){
    if(n == 1 || n == 0){
        return n;
    }
    return recFibonacci(n-1) + recFibonacci(n-2);
}

int main(){
    int n = 3;
    cout<< recFibonacci(n);

    return 0;
}