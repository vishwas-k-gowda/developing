#include<iostream>
using namespace std;
void swapingofarr(int arr[],int size){
int a,b;
int smallest=INT16_MAX;
int largest=INT16_MIN;
for(int i=0;i<size;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
        a=i;
    }
    if(arr[i]>largest){
        largest=arr[i];
        b=i;
    }
}
swap(arr[a], arr[b]);
}
int main(){
    int arr[]={11,22,33,44,55,66};
    int size=6;
    swapingofarr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
 }
return 0;
}
