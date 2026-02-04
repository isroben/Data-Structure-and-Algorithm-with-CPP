#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool anagrams(string &str1, string &str2){
    for(char ch: str1){
        int freq = 0;
        for(char s: str2){
            if(ch == s) freq++;
        }
        if(freq==0){
            return false;
        }
    }
    return true;
}

int main(){
    string str1 = "race";
    string str2 = "care";

    cout<<anagrams(str1, str2)<<endl;

    return 0;
}