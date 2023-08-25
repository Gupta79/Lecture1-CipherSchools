#include<iostream>
using namespace std;

int fib(int input){
    int final_ans = fib(input-1) + fib(input-2);
    return final_ans;
}

int main(){
    int input;
    cout<<"enter the num for fib series : ";
    cin>>input;
    cout<<fib(input);
    return 0;
}
