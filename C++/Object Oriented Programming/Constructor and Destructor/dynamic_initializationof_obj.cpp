#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(void) {} // important 
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    // methods
    void show(void);
};
// for interest rate in float
BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
// for interest rate in integer
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (r / 100.0);
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void BankDeposit::show()
{
    cout << "Principal amount was : " << principal << endl;
    cout << "Return Value after " << years << " year is " << returnValue << endl;
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p y and r(decimal) : " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    cout << "Enter the value of p y and R(integer) : " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}