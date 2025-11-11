#include <iostream>
using namespace std;

class Car {
    public:
    string model, company;
    float price;

    void display() {
        cout << "Model: "<< model << "\nCompany: "<< company << "\nPrice: $"<<price << endl;
    }
};

int main() {
    Car A,B,C;
    A.model = "R8";
    A.company = "Audi";
    A.price = 585000;
    B.model = "M5 CS";
    B.company = "BMW";
    B.price = 185000;
    C.model = "Explorer";
    C.company = "Ford";
    C.price = 40000;
    
    A.display();
    B.display();
    C.display();
}