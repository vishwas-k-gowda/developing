#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n,m,k,high=0;
    char s;
    cin>>n>>m>>k;
    string moves;
    vector<int>robo(n);
    for(int &val:robo){
        cin>>val;
    }
    vector<int>spikes(m);
    for(int &val:spikes){
        cin>>val;
        high=max(high,val);
    }
    vector<int>spi(high,0);
    for(int val:spikes){
        spi[val]++;
    }
    for(int i=0;i<k;i++){
        cin>>s;
        moves+=s;
    }
    int count=0;
  return 0;
}