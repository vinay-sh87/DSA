#include <iostream>
using namespace std;

void print_array(int *arr, int size)
{
    if (size > 0)
    {
        print_array(arr, size - 1);
        cout << arr[size - 1] << " ";
    }
    else
    {
        return;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    print_array(arr, 5);
    return 0;
}