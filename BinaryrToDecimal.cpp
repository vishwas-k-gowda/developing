#include<iostream>
using namespace std;
int decimaltobinary(int n){
    int ans=0;
    int power=1;
    while(n>0){
        int decimal=n%2;
        ans+=decimal*power;
        power*=10;
        n/=2;
    }
    return ans;
}
int main(){
     int n;
    cin>>n;
    cout<<decimaltobinary(n);
    return 0;
}