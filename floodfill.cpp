#include<iostream>
using namespace std;
class a{
    public:
    int *value;
    a(){
        value=new int;
        *value=10;
    }
    ~a(){
        delete value;
    }
};
int main(){
  a a1;
  a a2(a1);
  cout<<*a1.value<<"\n";
  *a2.value=12;
  cout<<*a2.value<<"\n";
  cout<<*a1.value;
}