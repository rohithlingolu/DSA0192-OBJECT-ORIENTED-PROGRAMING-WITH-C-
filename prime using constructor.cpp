#include<iostream>
using namespace std;

class PrimeSum {
public:
    int num1, num2, sum;

    PrimeSum(int a, int b) : num1(a), num2(b), sum(0) {
        if (isPrime(num1) && isPrime(num2)) {
            sum = num1 + num2;
            cout << "Sum of the two prime numbers (" << num1 << " and " << num2 << ") is: " << sum << endl;
        } else {
            cout << "Both numbers must be prime." << endl;
        }
    }

    ~PrimeSum() {
        cout << "PrimeSum object destroyed." << endl;
    }

    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
};

int main() {
    int num1, num2;
    cout << "Enter the first prime number: ";
    cin >> num1;
    cout << "Enter the second prime number: ";
    cin >> num2;

    PrimeSum primeSum(num1, num2);

    return 0;
}
