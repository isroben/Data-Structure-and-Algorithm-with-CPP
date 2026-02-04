#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getUniqueChar(string str){
    int freq[256] = {0};

    for(char ch: str){
        freq[ch]++;
    }
    for(char ch: str){
        if(freq[ch]==1){
            return ch;
        }
    }
    return -1;
}

int main(){
    string str = "aabbcd";
    char ch;

    int ans = getUniqueChar(str);

    if(ans > 0){
        ch = ans;
    }
    cout<<ch;

    return 0;
}