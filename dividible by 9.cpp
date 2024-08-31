#include<iostream>
using namespace std;

class SumDivisibleByNine {
public:
    int sum;

    SumDivisibleByNine() : sum(0) {
        calculateSum();
        displaySum();
    }

    void calculateSum() {
        for (int i = 100; i <= 200; i++) {
            if (i % 9 == 0) {
                sum += i;
            }
        }
    }

    void displaySum() {
        cout << "The sum of all integers between 100 and 200 divisible by 9 is: " << sum << endl;
    }
};

int main() {
    SumDivisibleByNine sumCalculator;
    return 0;
}
