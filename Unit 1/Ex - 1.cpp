#include <iostream>
using namespace std;

class Laptop {
    public:
    string Brand, Processor;
    int RAM;

    void display() {
        cout << "Brand: " << Brand << "\nProcessor: " << Processor << "\nRAM: " << RAM << " MB\n";
    }
};

int main() {
    Laptop A,B;
    A.Brand = "Dell";
    A.Processor = "Intel Core i3";
    A.RAM = 8192;
    B.Brand = "HP";
    B.Processor = "AMD Ryzen 5 4600H";
    B.RAM = 24576;
    A.display();
    B.display();
}