#include<iostream>
using namespace std;
int main(){
    int password;
    cout<<"enter the password";
    
    int password2;
    do{
        cin>>password2;
    }
    while(password2<999999);
    return 0;
}
