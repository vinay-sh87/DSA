#include <iostream>
using namespace std;

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    //* Use: used to store multiple values of similar datatype at contiguous memory locations
    // declaration
    int arr[] = {
        1,
        2,
        4,
        5,
        6,
    };
    int arr1[5];
    // initialization
    int arr2[] = {3, 4, 5, 7, 87, 78};
    int arr3[3] = {88, 99, 77};
    int arr4[5] = {4, 6};
    // initialize the array with zeros
    int arr5[4] = {0};
    // input values
    int arr6[5];
    cout << "Enter 5 numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr6[i];
    }
    // output values
    for (int i = 0; i < 5; i++)
    {
        cout << arr6[i] << " ";
    }
    cout << endl;
    // update values
    arr4[1] = 56;
    printArray(arr4, 2);
    cout << *(arr4) << endl;     // first value
    cout << *(arr4 + 1) << endl; // second value
    *(arr4 + 1) = 99;            // updating second value
    cout << *(arr4 + 1) << endl; // after updating second value

    string cars[5] = {"Audi", "Buggati", "BMW", "Ferrari", "Mustang"};
    cout << *cars << endl;
    return 0;
}