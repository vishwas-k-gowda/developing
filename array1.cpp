#include<iostream>
using namespace std;
int main(){
    int num[]={122,111,514,77,86};
    int size=5;
int smallest = __INT_MAX__;
for(int i=0;i<size;i++){
   smallest=min(num[i],smallest);
}
cout<<smallest;
return 0;
}