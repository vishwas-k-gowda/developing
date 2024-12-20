#include<iostream>
using namespace std;
bool fun(int n){
    if(((n)&(n-1))==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
if(fun(n)){
    cout<<"it is a power of 2";
}
else{
    cout<<"it is not a power of 2";
}
return 0;
}