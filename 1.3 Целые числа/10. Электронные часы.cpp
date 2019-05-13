#include <iostream>

using namespace std ;

int main() {
    int a;
    cin >> a;
    cout << a % 86400 / 3600 << ":" << a % 3600 / 60 / 10 << a % 3600 / 60 % 10 << ":" << a % 60 / 10 << a % 60 % 10;
    return 0;
}
