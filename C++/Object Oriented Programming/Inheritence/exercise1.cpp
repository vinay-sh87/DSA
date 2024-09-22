/*

Create two class
1. simpleCal --> takes input of two number using a utility function + - * /
2. scientificCal --> takes input of two number using a utility function perform  any four scientific operation and displays using another function
3. create anther hybridCalc class  and inherit both

*/

#include <iostream>
#include <cmath>
using namespace std;

// SimpleCalc class
class SimpleCalc
{
    int num1;
    int num2;

public:
    void getInput(int, int);
    void sum(void);
    void subtract(void);
    void multi(void);
    void divide(void);
};
void SimpleCalc::getInput(int a, int b)
{
    num1 = a;
    num2 = b;
}
void SimpleCalc::sum(void)
{
    cout << "Sum = " << num1 + num2;
}
void SimpleCalc::subtract(void)
{
    cout << "Subtraction = " << num1 - num2;
}
void SimpleCalc::multi(void)
{
    cout << "Multiply = " << num1 * num2;
}
void SimpleCalc::divide(void)
{
    cout << "Division = " << num1 / num2;
}

// scientificCalc class
class ScientificCalc
{
    int val;

public:
    void setValue(int);
    void Sin(void);
    void Cos(void);
    void Tan(void);
    void Log(void);
    void SquareRoot(void);
    void CubeRoot(void);
};

void ScientificCalc::setValue(int val)
{
    this->val = val;
}
void ScientificCalc::Sin(void)
{
    cout << "\nSine of " << this->val << " is : " << sin((double)this->val);
}
void ScientificCalc::Cos(void)
{
    cout << "\nCos of " << this->val << " is : " << cos((double)this->val);
}
void ScientificCalc::Tan(void)
{
    cout << "\nTan of " << this->val << " is : " << tan((double)this->val);
}
void ScientificCalc::Log(void)
{
    cout << "\nLog of " << this->val << " base e is : " << log((double)this->val);
}
void ScientificCalc::SquareRoot(void)
{
    cout << "\nSquare Root of " << this->val << " is : " << sqrt((double)this->val);
}
void ScientificCalc::CubeRoot(void)
{
    cout << "\nCube Root of " << this->val << " is : " << cbrt((double)this->val);
}

// hybridCalc class
class hybridCalc : public SimpleCalc, public ScientificCalc
{   

};

int main()
{
    // for simple calc
    /*
    SimpleCalc m;
    int a,b;
    char oper;
    cout<<"Enter two numbers "<<endl;
    cin>>a >> b ;
    m.getInput(a,b);
    cout<<"Enter the operation you wanna perform (+,-,*,/)"<<endl;
    cin>>oper;
    switch (oper){
        case '+':
            m.sum();
            break;
        case '-':
            m.subtract();
            break;
        case '*':
            m.multi();
            break;
        case '/':
            m.divide();
            break;
    }
    */

    // for scientific calc
    /*
    ScientificCalc sc;
    int temp;
    char op;
    cout<<"Input a value for scientific calculation "<<endl;
    cin>>temp;
    cout<<"Enter the operation you want to perform (!)(sin,cos,tan,log,squareRoot,cubeRoot --> s,c,t,l,2,3) "<<endl;
    cin>>op;
    sc.setValue(temp);
    switch (op){
        case 's':
            sc.Sin();
            break;
        case 'c':
            sc.Cos();
            break;
        case 't':
            sc.Tan();
            break;
        case 'l':
            sc.Log();
            break;
        case '2':
            sc.SquareRoot();
            break;
        case '3':
            sc.CubeRoot();
            break;
    }
    */
    hybridCalc h;
    int firstNumber, secondNumber;
    char ch;
    cout << "What operation do you want to perform ??" << endl
         << "1-->sum" << endl
         << "2-->subtraction" << endl
         << "3-->multiplication" << endl
         << "4-->division" << endl
         << "5-->sin" << endl
         << "6-->cos" << endl
         << "7-->tan" << endl
         << "8-->log" << endl
         << "9-->squareRoot" << endl
         << "0-->cubeRoot" << endl;
    cin >> ch;
    if (ch == '1' || ch == '2' || ch == '3' || ch == '4')
    {
        cout << "Enter two numbers " << endl;
        cin >> firstNumber >> secondNumber;
        h.getInput(firstNumber, secondNumber);
        switch (ch)
        {
        case '1':
            h.sum();
            break;
        case '2':
            h.subtract();
            break;
        case '3':
            h.multi();
            break;
        case '4':
            h.divide();
            break;
        }
    }
    else if (ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9' || ch == '0')
    {
        cout << "Enter a number " << endl;
        cin >> firstNumber;
        h.setValue(firstNumber);
        switch (ch){
        case '5':
            h.Sin();
            break;
        case '6':
            h.Cos();
            break;
        case '7':
            h.Tan();
            break;
        case '8':
            h.Log();
            break;
        case '9':
            h.SquareRoot();
            break;
        case '0':
            h.CubeRoot();
            break;
    }
    }
    else
    {
        cout << "Wrong input for now..." << endl;
    }

    return 0;
}