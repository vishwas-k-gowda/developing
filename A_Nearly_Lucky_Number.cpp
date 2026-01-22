#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<int>check(10,0);
    while(n){
        if(n%10==4||n%10==7){
            check[n%10]++;
        }
        n/=10;
    }
    int sum=check[4]+check[7];
    if(sum==0){
        cout<<"NO";
        return 0;
    }
    while(sum){
        if(sum%10!=4&&sum%10!=7){
           cout<<"NO";
           return 0;
        }
        sum/=10;
    }
    cout<<"YES";
}
