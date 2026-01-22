#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,high=0,low=101,srt,lng;
    cin>>n;
    vector<int>sol(n);
    for(int i=0;i<n;i++){
        cin>>sol[i];
        if(sol[i]>high){
            high=sol[i];
           lng=i;
        }
        if(sol[i]<=low){
            low=sol[i];
            srt=i+1;
        }
    }
    if(srt<=lng){
        cout<<n-srt+lng-1;
    }
    else{
        cout<<n-srt+lng;
    }
}
