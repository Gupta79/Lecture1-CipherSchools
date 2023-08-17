#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl<<"values of a and b after swapping inside function : "<<a<<" "<<b<<endl ;
}

int main(){ 
    int a =12, b=45;
    swap(a,b);
    cout<<"values of a and b after swapping outside function : "<<a<<" "<<b;
    return 0;
}
