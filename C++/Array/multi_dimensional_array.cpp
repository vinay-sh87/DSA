#include <iostream>
using namespace std;

int main()
{
    int arr[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "size of array arr is " << sizeof(arr) << " and the number of elements are " << sizeof(arr) / sizeof(int) << endl;

    char array[2][4] = {
        {'A', 'B', 'C', 'D'},
        {'E', 'F', 'I', 'H'},
    };
    array[1][2] = 'G';
    cout << array[1][2] << endl;

    return 0;
}