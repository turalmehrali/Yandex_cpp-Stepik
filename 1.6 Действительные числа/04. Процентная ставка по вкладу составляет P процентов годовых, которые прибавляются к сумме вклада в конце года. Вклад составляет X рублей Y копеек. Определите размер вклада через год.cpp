#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    b = (b * 100 + c) * (a + 100) / 100;
    cout << b / 100 << " " << b % 100;
    return 0;
}
