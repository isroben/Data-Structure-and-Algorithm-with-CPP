#include<iostream>
#include<vector>
using namespace std;

int maxArea_bruteforce(vector<int> &height){   // O(n^2)
    int maxWater = 0;

    for(int i=0; i<height.size(); i++){
        for(int j=i+1; j<height.size(); j++){
            int w = j-i;
            int ht = min(height[i], height[j]);
            int currWater = w*ht;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;

}

int maxArea_Optim(vector<int> &height){ // O(n)
    int i = 0, j = height.size() - 1, maxWater = INT32_MIN;

    while(i<j){
        int w = j-i;
        int ht = min(height[i], height[j]);
        int currWater = w*ht;

        maxWater = max(maxWater, currWater);
        height[i]<height[j] ? i++ : j--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout<<maxArea_bruteforce(height)<<endl;
    cout<<maxArea_Optim(height)<<endl;

    return 0;
}