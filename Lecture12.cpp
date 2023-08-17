#include<iostream>
using namespace std;
int main(){
    int n;
    float m;
    cout<<"address of n : "<<&n<<endl;
    cout<<"address of m : "<<&m<<endl;

    int * p = &n;
    cout<<p;
    return 0;
}
