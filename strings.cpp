#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseStr(string &str){

    reverse(str.begin(), str.end());
    cout<<str;

    return;
}

int main(){
    string str = "apna collage";

    for(int i=0; i<str.length(); i++){
        cout<< str[i] <<" ";
    }
    cout<<endl;

    for(char ch: str){
        cout<< ch <<" ";
    }
    cout<<endl;

    reverseStr(str);

    return 0;
}