#include<iostream>
using namespace std;
int linear(int n){
    int size=6;
     int num[]={12,34,64,67,87,96};
    for(int i=0;i<size;i++){
        if(num[i]==n){
             return i;
        }
    }
   return -1;
}
int main(){
    int n;
    cin>>n;
    cout<<linear(n);
   return 0;
}