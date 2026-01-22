#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<cstring>
using namespace std;
void check(int a,int i){
   if(i==0){
      return;
   }
   cout<<a;
   check(a,--i);
   check(a,--i);
}
 int main(){
    check(4,3);
 }