#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1;i<=n;i++){
        int c=a+b;
          cout<<c<<endl;
          a=b;
          b=c;
    }
   
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
} 