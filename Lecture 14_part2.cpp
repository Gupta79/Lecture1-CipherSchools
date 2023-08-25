#include<iostream>
using namespace std;
void minandmax(int *a, int *min, int* max){
    int l= a[0], s= a[0];
    for(int i=0; i<=5; i++){
        if(a[i]>l){
            l=a[i];
        }
        if(a[i]<s){
            s=a[i];
        }
    }
}
int main(){
    int a[5];
    int min, max;
    for(int i=0; i<=5; i++){
        cin>>a[i];
    }
    minandmax(a, &min, &max);
    return 0;
}
