#include<iostream>
using namespace std;

float sum(int a , float c, float d);

int main(){
    cout<<sum(23.23,53.234,65.4);
    return 0;
}

float sum(int a , float c, float d){
    return (a+c+d);
}
