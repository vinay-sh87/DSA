//* Methods -> functions from the class
/* Definition -> two ways
   1. Inside class definition
   2. Outside class definition
*/
#include <iostream>
using namespace std;

class Car
{
private:
    int price;
    string name;
    string brand;

public:
    void set_info(int price, string name, string brand) // function definition inside the class
    {
        this->price = price;
        this->name = name;
        this->brand = brand;
    }
    void info(void);
};
void Car::info(void)
{ // method definition outside the class
    cout << "INFO: " << endl;
    cout << "Price: " << this->price << endl;
    cout << "Name: " << this->name << endl;
    cout << "Brand: " << this->brand << endl;
}
int main()
{
    Car car1;
    car1.set_info(20, "Harrier", "Tata");
    car1.info();
    Car car2;
    car2.set_info(500, "Urus", "Lambhorghini");
    car2.info();
    return 0;
}