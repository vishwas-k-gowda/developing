#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int>&vec,int n){
int size=3;
    for(int i=0;i<size;i++){
        if(n==vec[i]){
            return i;
        }
    }
    return -1;
}
int main(){
vector<int>vec={3,6,9};
int size=3;
int n;
cin>>n;
cout<<linearsearch(vec,n);
}
