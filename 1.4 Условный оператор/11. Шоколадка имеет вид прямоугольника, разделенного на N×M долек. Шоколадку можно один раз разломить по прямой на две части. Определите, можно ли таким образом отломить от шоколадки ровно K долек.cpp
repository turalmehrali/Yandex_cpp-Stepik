#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if((a * b > c) && (c % a == 0 || c % b == 0)){
        cout << "YES";
    }
    else
        cout << "NO";
}
