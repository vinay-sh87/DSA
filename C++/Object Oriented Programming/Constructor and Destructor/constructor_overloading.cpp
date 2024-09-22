#include<iostream>
#include<cmath>
using namespace std;

class Area{
    int x,y;
    const double pi=3.14;
    public:
        Area(int ); // for area of square
        Area(int ,int ); // for area of rectangle
        Area(double ); // for area of circle
};
Area::Area(int a){
    x=a;
    cout<<"Area of Square is : "<<x*2<<endl;

}
Area::Area(int a,int b){
    x=a;
    y=b;
    cout<<"Area of rectangle is : "<<x*y<<endl;
}
Area :: Area(double a){
    cout << "Area of Circle is : " <<  (pi * pow((double)a,(double)2)) << endl ;

}
int main(){
    Area s(4);
    Area r(3,4);
    Area c(4.12);
    
    return 0;
}