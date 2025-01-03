#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&num){
    int size=4;
    int st=0;
    int end=size-1;
    while(st<end){
        swap(num[st],num[end]);
        st++,end--;
    }
}
int main(){
    vector<int>num={3,6,9,10};
    reverse(num);
    for(int val:num){
        cout<<val<<' ';
    }
}