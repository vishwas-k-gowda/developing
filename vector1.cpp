#include<iostream>
#include<vector>
using namespace std;
int uniquenum(vector<int>&num){
    int ans=0;
    for(int val:num){
        ans=ans^val;
    }
    return ans;
}
int main(){
    vector<int>num={4,1,2,1,2};
 cout<<uniquenum(num);
    return 0;
}