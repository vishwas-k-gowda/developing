#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<iomanip>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    int half=power(x,n/2);
    if(n%2!=0){
       return half*half*x;
    }
    return half*half;
}
int main(){
   cout<<power(2,10);
   return 0;
}
