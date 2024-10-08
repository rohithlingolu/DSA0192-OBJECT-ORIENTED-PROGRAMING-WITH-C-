#include <iostream>
using namespace std;

class Series {
    int n;
public:
    void input() {
        cout << "Enter the limit: ";
        cin >> n;
    }

    void show() {
        int first = 0, second = 1, next;
        for (int i = 0; i < n; ++i) {
            if (i <= 1)
                next = i;
            else {
                next = first + second;
                first = second;
                second = next;
            }
            cout << next << " ";
        }
        cout << endl;
    }
};

int main() {
    Series fib;
    fib.input();
    fib.show();
    return 0;
}
