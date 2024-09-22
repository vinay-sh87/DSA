#include <iostream>
using namespace std;

class Date
{
    int day = 1;
    int month = 1;
    int year = 2000;

public:
    Date(){};
    Date(int, int, int);
    void display();
    void validate(void);
};
Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
void Date::display(void)
{
    if (day < 10 && month < 10)
    {
        cout << "0" << day << ":"
             << "0" << month << ":" << year << endl;
    }
    else
    {
        cout << day << ":" << month << ":" << year << endl;
    }
}
void Date::validate(void)
{
    if (month <= 0 || month >= 12)
    {
        cout << "Invalid Date\n";
    }
    else if (year <= 1800 || year >= 2023)
    {
        cout << "Invalid Date\n";
    }
    else if (month == 2)
    {
        if (day == 30 || day == 31)
        {
            cout << "Invalid Date\n";
        }
        else{
                       cout<<"Valid date"<<endl;
        }
    }
    else
    {
        cout << "Valid date" << endl;
    }
}
int main()
{
    Date d;
    d.display();
    d.validate();
    Date d1(34, 4, 2089);
    d1.display();
    d1.validate();
    Date d2(25, 2, 2006);
    d2.display();
    d2.validate();

    return 0;
}