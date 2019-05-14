#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    a = 1;
    b = 1;
    cin >> c;
    a = c;
    while (c != 0) {
        cin >> c;
            if (c >= a){
                b = a;
                a = c;
            }
        else if (c >= b){
            b = c;
        }
    }
    cout << b;
    return 0;
}
