#include<iostream>
using namespace std;
int main(){
    //printning natural numbers
    cout<<1<<endl;
    cout<<2<<endl;
    cout<<3<<endl;
    //to remove this repetition we will use loops
    //For Loop
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
    return 0;
}