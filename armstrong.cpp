#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int original=n;
    while(n>0){
        int a=n%10;
        int b=a*a*a;
        ans+=b;
        n=n/10;
    }
    if(ans==original){
        cout<<"armstrong number";
    }
    else{
        cout<<"not a armstrong number";
    }
}