#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>&num,int target){
    vector<int>ans;
    int n=num.size();
int i=0,j=n-1;
while(i<j){
    int sum=num[i]+num[j];
if(sum>target){
   j--;
}
if(sum<target){
    i++;
}
else{
    ans.push_back(i);
    ans.push_back(j);
    return ans;
}
}
}
int main(){
    vector<int>num={4,5,6,8,9};
       int target=10;
    vector<int>ans= pairsum(num,target);
    cout<<ans[0]<<ans[1];
    return 0;
}