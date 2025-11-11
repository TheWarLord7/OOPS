#include <iostream>
using namespace std;

class Account {
    public:
    int number;
    string name;
    float balance;

    void display() {
        cout << "Account Number: "<< number << "\nName: "<< name << "\nBalance: $"<< balance << endl;
    }
};

int main() {
    Account A,B;
    A.number = 1;
    A.name = "AK";
    A.balance = 342400;
    B.number = 10;
    B.name = "HI";
    B.balance = 296690;
    A.display();
    B.display();
}