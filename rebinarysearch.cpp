#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int sor(string s,int count,int i,int first){
    if(first==s.size()){
        return count;
    }
    if(s[i]==s[first]){
         ++count;
    }
    if(i==s.size()-1){
        return sor(s,count,first+1,first+1);
    }
    else{
        return sor(s,count,++i,first);
    }
}
int main(){
    cout<<'a'+4;
}
