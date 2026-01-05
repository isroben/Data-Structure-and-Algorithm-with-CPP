#include<iostream>
using namespace std;

double nyPow(double x, int n){
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x == -1 && n%2 == 0) return 1.0;
    if(x == -1 && n%2 != 0) return -1.0;

    long binForm = n;

    if(n < 0){
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;

    while(binForm > 0){
        cout<<binForm<<endl;
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main(){
    cout<<nyPow(2, 4);

    return 0;
}