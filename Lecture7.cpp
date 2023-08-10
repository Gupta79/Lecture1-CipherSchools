#include<iostream>
using namespace std;
int main(){
    int password;
    cout<<"enter the password";
    // cin>>password;
    // //using while loop
    // while(password<999999){
    //     cout<<"the password does not meet condition";
    //     cin>>password; 
    // }

    //using do while loop
    int password2;
    do{
        cin>>password2;
    }
    while(password2<999999);
    return 0;
}