#include <iostream>
using namespace std;

class Book
{
    string title;
    int price;
    string author;
    string publisher;

public:
    Book(){};
    Book(string, string, string, int);
    void showData(void);
};
Book::Book(string title, string author, string publisher, int price)
{
    this->title = title;
    this->author = author;
    this->publisher = publisher;
    this->price = price;
}
void Book::showData(void)
{
    cout << "Title = " << title << endl
         << "Author = " << author << endl
         << "Publisher = " << publisher << endl
         << "Price = " << price << endl;
}
int main()
{
    Book b1 = Book("The Lord of the Rings", "J.R.R. Tolkien", "Allen & Unwin", 1299);
    b1.showData();

    return 0;
}