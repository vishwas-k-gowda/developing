#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int ans(vector<int>top,vector<int>bottom){
    vector<int>check1(7,0);
    vector<int>check2(7,0);
    int maximum1=0,maximum2=0;
    for(int i=0;i<top.size();i++){
        check1[top[i]]++;
        check2[bottom[i]]++;
    
    }
    for(int i=1;i<7;i++){
        if(check1[i]>check1[maximum1]){
            maximum1=i;
        }
        if(check2[i]>check2[maximum2]){
            maximum2=i;
        }
    }
    int count=0;
    if(check1[maximum1]>check2[maximum2]){
          for(int i=0;i<top.size();i++){
            if(top[i]!=maximum1){
                swap(top[i],bottom[i]);
                count++;
            }
          }
          for(int i=1;i<top.size();i++){
            if(top[i]!=top[i-1]){
                return -1;
            }
          }
          return count;
     }
     else{
        for(int i=0;i<top.size();i++){
            if(bottom[i]!=maximum2){
                swap(bottom[i],top[i]);
                count++;
            }
          }
          for(int i=1;i<top.size();i++){
            if(bottom[i]!=bottom[i-1]){
                return -1;
            }
          }
          return count;
     }
     return -1;
}
int main(){
vector<int>top={2,2,2,4,2,2};
vector<int>bottom={1,1,1,1,1,1};
cout<<ans(top,bottom);;
return 0;
}