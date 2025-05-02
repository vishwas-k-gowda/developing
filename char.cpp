#include<iostream>
#include<string>
using namespace std;
bool check(string s1,string s2){
if(s1.size()!=s2.size()){
   return false;
}
int i=0,count=0,diff1,diff2;
while(i<s1.size()){
    if(count==1&&s1[i]!=s2[i]){
        if(diff1!=s2[i]||diff2!=s1[i]){
            return false;
        }
    }
    if(s1[i]!=s2[i]){
        diff1=s1[i],diff2=s2[i];
        count++;
    }
    if(count>2){
        return false;
    }
    i++;
}
return true;
}
int main(){
    string s1="vishwasab";
string s2="vsshwaiba";
if(check(s1,s2)){
    cout<<"true";
}
else{
    cout<<"false";
}
}