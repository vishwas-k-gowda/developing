#include<iostream>
using namespace std;
int binarytodecimal(int n){
    int ans=0;
    int power=1;
    while(n>0){
        int decimal=n%10;
        ans+=decimal*power;
        power*=2;
        n/=10;
    }
    return ans;
}
int main(){
     int n;
    cin>>n;
    cout<<binarytodecimal(n);
    return 0;
}