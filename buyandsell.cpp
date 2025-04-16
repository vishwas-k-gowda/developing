#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int buyandsell(vector<int>&prices){
    int n=prices.size(),sell=0;
    for(int i=0;i<n-1;i++){
        if(prices[i]<prices[i+1]){
            sell+=prices[i+1]-prices[i];
            }
    }
  return sell;
}
int main(){
    vector<int>prices={7,1,5,3,6,4};
    cout<<buyandsell(prices);
}