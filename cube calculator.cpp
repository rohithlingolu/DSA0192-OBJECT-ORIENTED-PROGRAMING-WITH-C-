#include <iostream>
using namespace std;

class CubeCalculator {
public:
    int number;
    CubeCalculator(int n) : number(n) {
        cout << "CubeCalculator object created." << endl;
    }
    void displayCubes() {
        for (int i = 1; i <= number; i++) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
    CubeCalculator() {
        cout << "CubeCalculator object destroyed." << endl;
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    CubeCalculator calculator(n);
    calculator.displayCubes();
 return 0;
}
