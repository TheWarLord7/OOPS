#include <iostream>
using namespace std;

class Book {
    public:
    string title, author;
    float price;

    Book() {
        title = "";
        author = "";
        price = 0;
    }

    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    void display() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: Rs." << price << endl;
    }
};

int main() {
    Book b1;
    Book b2("Mein kampf", "Adolf Hitler", 2000);
    Book b3(b2);

    cout << "Default Constructor Object:" << endl;
    b1.display();

    cout << "Parameterized Constructor Object:" << endl;
    b2.display();

    cout << "Copy Constructor Object:" << endl;
    b3.display();

    return 0;
}
