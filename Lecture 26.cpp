#include<iostream>
using namespace std;

class student{
    public :
    string name;
    int mids ;
    float ends;
    bool present_absent;

    void calculate_marks(){
        float total_marks;
        total_marks = mids*50 + ends*100;
        cout<<total_marks;
    }
};

class cars{
    string car_name;
    string tyre;
    int no_of_tyres;
    int no_of_seats;
};

int main(){
    student a,c; //these are objects of students class 
    a.name = "manu";
    a.mids = 34;
    a.ends = 23.4;
    a.present_absent = 1;

    a.calculate_marks();
    
    cars b;
    return 0;
}
