#include<iostream>
#include<vector>
#include<climits>
#define v vector<int>
using namespace std;
void print(v&arr,int n){
    for(int val:arr){
        cout<<val<<" ";
    }
}
void bubble(v&arr,int n){
    for(int i=n-2;i>=0;i--){
        int curr=arr[i];
        int next=i+1;
        while(next<arr.size()&&arr[next]>curr){
            swap(arr[next],arr[next-1]);
            next++;
        }
    }
    print(arr,n);
}
int main(){
    v arr={3,6,2,1,8,7,4,5,3,1};
    int n=arr.size();
 bubble(arr,n);
}