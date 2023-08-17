#include<iostream>
using namespace std;

int compare(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
void compare2(int d, int b){
    if(d==34){
        cout<<"matched";
    }
    else{
        cout<<"not matched";
    }
}
int main()
{
    int x,y;
    cout<<"enter two numbers that you want to compare : ";
    cin>>x>>y;
    cout<<compare(x,y)<<endl;
    compare2(x,y); 
    return 0;
}
