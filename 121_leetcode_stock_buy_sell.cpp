#include<iostream>
using namespace std;

int maxProfit(int prices[6]){
    int maxProfit = 0, bestBuy = prices[0];

    for(int i=1; i<6; i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main(){
    int prices[6] = {7,1,5,3,6,4};
    cout<<maxProfit(prices)<<endl;

    return 0;
}
