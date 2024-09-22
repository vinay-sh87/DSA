#include <bits/stdc++.h>
using namespace std;
struct student
{
    int age;
    int marks;
    string name;

} std1, std2; // structure variables

struct car
{
    int price;
    string name;
};
int main()
{
    std1.age = 18;
    std1.marks = 89;
    std1.name = "Ashok";
    cout << std1.age << endl
         << std1.marks << endl
         << std1.name << endl;
    std2.age = 19;
    std2.marks = 98;
    std2.name = "Mark";
    cout << std2.age << endl
         << std2.marks << endl
         << std2.name << endl;
    car car1;
    car1.name = "Audi e-Tron";
    car1.price = 20000000;
    cout << car1.price << endl
         << car1.name << endl;
    car car2;
    car2.name = "Lambhorghini Urus";
    car2.price = 50000000;
    cout << car2.price << endl
         << car2.name << endl;

    return 0;
}