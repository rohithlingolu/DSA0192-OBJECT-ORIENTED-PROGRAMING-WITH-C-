#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exponent, result;
    cout << "Input the base: ";
    cin >> base;
    cout << "Input the exponent: ";
    cin >> exponent;

    result = pow(base, exponent);

    cout << "Result: " << result << endl;

    return 0;
}
