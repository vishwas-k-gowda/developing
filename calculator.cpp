#include<iostream>
using namespace std;
int main(){
    char button;
    int n1,n2;
    cin>>n1>>n2;
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<n1+n2;
        break;
        case 'b':
        cout<<n1*n2;
        break;
        case 'c':
        cout<<n1/n2;
        break;
        case 'd':
        cout<<n1-n2;
        break;
    }
}