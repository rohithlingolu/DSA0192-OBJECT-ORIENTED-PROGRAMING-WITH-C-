#include <iostream>
using namespace std;

void myfunction(int num) {
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            cout << i << " is an even number" << endl;
        } else {
            cout << i << " is an odd number" << endl;
        }
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    myfunction(num);
    return 0;
}

