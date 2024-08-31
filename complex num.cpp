#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;

public:
    void input() {
        cout << "Enter the value of Complex Numbers a and b: ";
        cin >> real >> imaginary;
    }

    Complex operator + (const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }

    Complex operator - (const Complex &obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imaginary = imaginary - obj.imaginary;
        return temp;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;
    c1.input();
    c2.input();

    cout << "Input Values:" << endl;
    c1.display();
    c2.display();

    result = c1 + c2;
    cout << "Result of Addition: ";
    result.display();

    result = c1 - c2;
    cout << "Result of Subtraction: ";
    result.display();

    return 0;
}
