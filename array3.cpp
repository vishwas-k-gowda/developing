#include<iostream>
using namespace std;
void reversearray(int num[],int size ){
 int start=0;
    int end=size-1;
     while(start<end){
     swap(num[start],num[end]);
     start++,end--;
     }}
int main(){
    int num[]={2,4,6,8};
    int size=4;
    reversearray(num,size);
     for(int i=0;i<size;i++){
     cout<< num[i];
     }
     return 0;
}