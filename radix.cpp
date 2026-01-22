#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maximum(vector<int>a){
   int maximum=INT_MIN;
   for(int val:a){
    maximum=max(val,maximum);
   }
   return maximum;
}
void radix_sort(vector<int>&a,int exp){
    vector<int>count(10,0);
    vector<int>b(a.size());
    for(int val:a){
        count[(val/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    for(int i=a.size()-1;i>=0;i--){
        b[count[(a[i]/exp)%10]-1]=a[i];
        count[(a[i]/exp)%10]--;
    }
    for(int i=0;i<a.size();i++){
        a[i]=b[i];
    }
}
void radix(vector<int>&a){
    int max=maximum(a);
    for(int exp=1;(max/exp)>0;exp*=10){
        radix_sort(a,exp);
    }
}
int main(){
    vector<int>a={654,44,98,43,32,2,1};
    radix(a);
    for(int val:a){
        cout<<val<<" ";
    }
}