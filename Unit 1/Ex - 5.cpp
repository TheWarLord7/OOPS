#include <iostream>
using namespace std;

class Book {
    public:
    string title, author;
    float price;

    void display() {
        cout << "Title: "<< title << "\nAuthor: "<< author << "\nPrice: Rs."<< price <<endl;
    }
};

int main() {
    Book A,B;
    A.title = "The Bad Guys - 1";
    A.author = "Aaron Blabey";
    A.price = 599;
    B.title = "The Bad Guys - 2";
    B.author = "Aaron Blabey";
    B.price = 599;
    
    A.display();
    B.display();
}