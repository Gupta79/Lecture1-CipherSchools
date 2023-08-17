#include<iostream>
using namespace std;
int main(){
    int a;
    int * p = &a;
    a =123;
    int b =2334;
    int * q = &b;
    int c = *p + *q;
    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of a from the pointer using * is : "<<*p<<endl;
    cout<<"the value of b from the pointer using * is : "<<*q<<endl;
    cout<<&p<<endl;
    cout<<c;
    return 0;
}
