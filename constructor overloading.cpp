#include <iostream>
using namespace std;
class CubeCalculator {
public:
    int number;
    CubeCalculator() : number(0) {
        cout << "Default CubeCalculator object created with number = 0." << endl;
    }
    CubeCalculator(int n) : number(n) {
        cout << "Parameterized CubeCalculator object created with number = " << number << "." << endl;
        displayCubes();
    }
    void displayCubes() {
        for (int i = 1; i <= number; i++) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    CubeCalculator calculator(n);
    return 0;
}
