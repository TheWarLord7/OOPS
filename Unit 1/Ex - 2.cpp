#include <iostream>
using namespace std;

class Student {
    public:
    string name, reg;
    float marks;

    void display() {
        cout << "Name: " << name << "\nReg No.: " << reg << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student A,B,C;
    A.name = "AK";
    A.reg = "2525";
    A.marks = 94.6;
    B.name = "HI";
    B.reg = "2496";
    B.marks = 86.6;
    C.name = "BH";
    C.reg = "2368";
    C.marks = 97.8;
    A.display();
    B.display();
    C.display();
}