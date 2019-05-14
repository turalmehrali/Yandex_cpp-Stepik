#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    b = 1;
    c = 1;
    d = 2;
    cin >> a;
    if (a == 1) {
        b = 1;
    }
    if (a == 2) {
        b = 1;
    }
    if (a > 2) {
        while (a != d) {
            b = b + c;
            c = b - c;
            d = d + 1;
        }
    }
    cout << b;
    return 0;
}
