#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxsubarray(vector<int>&nums){
    int cursum=0,maxsum=INT_MIN;
    for(int val:nums){
        cursum+=val;
       maxsum=max(cursum,maxsum);
        if(cursum<0){
            cursum=0;
        }
    } 
    return maxsum;
}
int main(){
   vector<int>nums={-1,2,-3,5,6};
   cout<<maxsubarray(nums);
   return 0;
}