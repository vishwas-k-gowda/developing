#include<stdio.h>
int maximum(int a[],int size){
   int maximum=-1000;
   for(int i=0;i<size;i++){
    if(maximum<a[i]){
        maximum=a[i];
    }
   }
   return maximum;
}
void radix_sort(int a[],int exp,int size){
    int count[10]={0};
    int b[size];
    for(int i=0;i<size;i++){
        count[(a[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    for(int i=size-1;i>=0;i--){
        b[count[(a[i]/exp)%10]-1]=a[i];
        count[(a[i]/exp)%10]--;
    }
    for(int i=0;i<size;i++){
        a[i]=b[i];
    }
}
void radix(int a[],int size){
    int max=maximum(a,size);
    for(int exp=1;(max/exp)>0;exp*=10){
        radix_sort(a,exp,size);
    }
}
void main(){
    int a[7]={654,44,98,43,32,2,1};
    int size=sizeof(a)/sizeof(int);
    radix(a,size);
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
        printf(" ");
    }
}