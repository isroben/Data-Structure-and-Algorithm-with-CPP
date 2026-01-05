#include<iostream>
using namespace std;

bool palindrome(int nums){
    int remainder, x=nums;
    long long ans;

    while(nums>0){
        remainder = nums%10;
        ans = ans*10 + remainder;

        nums /= 10;
    }
    if(x == ans){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num = 601;
    cout<<palindrome(num);


    return 0;
}