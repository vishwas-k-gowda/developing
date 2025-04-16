#include<iostream>
using namespace std;
void transpose(int arr[][3],int m,int n){
    int mat[n][m];
   int row=0,col=0;
    for(int j=0;j<n;j++){
        for(int i=m-1;i>=0;i--){
            mat[row][col]=arr[i][j];
            col++;
        }
        row++,col=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int arr[][3]={{1,2,3},{4,5,6}};
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=sizeof(arr[0])/sizeof(int);
    transpose(arr,m,n);
}