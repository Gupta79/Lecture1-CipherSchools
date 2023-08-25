#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
    cout<<a<<" "<<b;
}
int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<endl<<"values of x and y after swapping are : "<<x<<" "<<y;
    cout<<endl<<&x;
    return 0;
    
}
