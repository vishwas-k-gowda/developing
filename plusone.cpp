#include<iostream>
#include<vector>
using namespace std;
vector<int>plusone(vector<int>&digits){
  int i=digits.size()-1;
  while(i>=0){
    if(digits[i]==9)
    digits[i]=0;
    else{
      digits[i]+=1;
      return digits;
    }
    i--;
  }
  digits.insert(digits.begin(),1);
  return digits;
}
int main(){
    vector<int>digits={9,9,9};
    plusone(digits);
    for(int val:digits){
cout<<val<<" ";
    }
}