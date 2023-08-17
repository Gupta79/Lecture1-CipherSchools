#include <iostream>
using namespace std;

int sum(int a, int b)
{

    int c = a + b;
    a = 2345;
cout<<"the value of c is : ";
    return c;
}

int main()
{
    cout<<"value of c is : ";
    int c=245;
    cout<<c<<endl;
    int a, b;
    cin >> a >> b;
   
    cout <<"the value of c is : " <<sum(a, b);
    return 0;
}
