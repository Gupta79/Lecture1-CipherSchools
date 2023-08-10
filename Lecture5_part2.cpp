#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    cout<<"numbers given"<<endl;
    for(int j=0; j<5; j++){
        
    cout<<a[j]<<endl;
    }
    cout<<"numbers given in reverse order"<<endl;
    for(int k=4; k>=0; k--){
        
    cout<<a[k]<<endl;
    }
    return 0;
}