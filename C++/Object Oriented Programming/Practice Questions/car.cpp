#include <iostream>
using namespace std;

class Car
{
    string company;
    string model;
    int year;

public:
    Car(string, string, int);
    void showData(void);
};
Car::Car(string company, string model, int year)
{
    this->company = company;
    this->model = model;
    this->year = year;
}
void Car::showData(void)
{
    cout << "Company Name : " << this->company << endl;
    cout << "Company Model : " << this->model << endl;
    cout << "Company Year : " << this->year << endl;
}
int main()
{
    Car c1 = Car("Suzuki", "Baleno Delta", 2019);
    c1.showData();
    Car c2("Mahindra", "XUV 700", 2021);
    c2.showData();

    return 0;
}