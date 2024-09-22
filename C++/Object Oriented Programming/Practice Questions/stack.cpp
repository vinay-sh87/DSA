#include <iostream>
using namespace std;

class Stack
{
    int *data;
    int capacity;
    int size;

public:
    Stack(){};
    Stack(int);
    void Push(int);
    int Pop(void);
    bool isEmpty(void);
    void printStack(void);
};
Stack::Stack(int capacity)
{
    this->capacity = capacity;
    data = new int[capacity];
    size = 0;
}
void Stack::Push(int element)
{
    if (size == capacity)
    {
        return;
    }
    data[size++] = element;
}
int Stack::Pop(void)
{
    if (size == 0)
    {
        return -1;
    }
    return data[--size];
}
bool Stack::isEmpty(void)
{
    return size == 0;
}
void Stack::printStack(void)
{
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
int main()
{
    Stack s(10);
    s.Push(10);
    s.Push(16);
    s.Push(15);
    s.Push(46);
    s.Push(4);
    s.printStack();
    cout << "Popped Element = " << s.Pop() << endl;
    s.printStack();

    return 0;
}