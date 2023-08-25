#include<iostream.h>
using namespace std;

Class SchoolBus
{
    private:

    int number_tyres;
    string name;
    int capacity;
    int milegage;

    string schol_name;

    int number_holidays;

    public:

    void calculatemileage()
    {
        cout<<"the mileage is"<<milegage;
    }

    void printnameofSchool()
    {
        cout<<"the name of the school is"<<name;
    }
};

int main()
{
    return 0;
}
