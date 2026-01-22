#include<iostream>
#include<string>
#include<vector>
using namespace std;
void tower_hanoi(string src,string help,string dest,int n){
    if(n==1){
        cout<<"move"<<n<<"from"<<src<<"to"<<dest<<"\n";
        return;
    }
    tower_hanoi(src,dest,help,n-1);
    cout<<"move"<<n<<"from"<<src<<"to"<<dest<<"\n";
    tower_hanoi(help,src,dest,n-1);
}
int main(){
    string src="A",help="B",dest="C";
    int n;
    cin>>n;
    tower_hanoi(src,help,dest,n);
}
