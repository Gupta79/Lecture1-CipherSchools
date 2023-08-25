#include<iostream>
using namespace std;
int main(){

    string a;    string name , surname;
        getline(cin,a);
    cout<<a;
    cin>>name;
    cin>>surname;
    string s = name + " " +surname;
    cout<<s<<endl;
    cout<<s.length();//this is used to find the length of a string


    return 0;
}
