#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int>&num,int k){
    int a=num.size()-1;
    while(k>0){
     num.insert(num.begin(),num[a]);
     num.pop_back();
     k--;
    }
    return num;
}
int main(){
    vector<int>num={1,2,4};
    int k=5;
    rotate(num,k);
    for(int val:num){
        cout<<val<<" ";
    }
}