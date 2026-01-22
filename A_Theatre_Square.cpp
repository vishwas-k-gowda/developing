#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<string>
using namespace std;
int main(){
    long long n,m,a,ans;
    cin>>n>>m>>a;
    if(n%a!=0){
        if(m%a!=0){
            ans=(n/a)*(m/a)+((n/a)+1)+(m/a);
        }
        else{
            ans=(n/a)*(m/a)+m/a;
        }
    }
    else if(m%a!=0){
         ans=(n/a)*(m/a)+n/a;
    }
    else{
         ans=(n/a)*(m/a);
    }
    cout<<ans<<"\n";
}