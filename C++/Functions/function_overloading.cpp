//* Multiple functions having the same name but different parameters are known as function overloading...
// 1. Parameters should have different types
// 2. Parameters should have in different count
#include<iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}
double sum(double x, double y){
    return x+y;
}
void printArray(int *arr,int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printArray(string *arr,int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cout<<"Sum of 5 + 4 = "<<sum(5,4)<<endl;
    cout<<"Sum of 6.55 + 3.43 = "<<sum(9,5)<<endl;
    int arr[] = {34,5,6,7,85};
    printArray(arr,5);
    string fruits[] = {"apple","orange","banana","grapes","watermelon"};
    printArray(fruits,5);
    return 0;
}
