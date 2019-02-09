#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a%2 == 1) a = a + 1;
    if(b%2 == 1) b = b + 1;
    if(c%2 == 1) c = c + 1;
    int cavab = a/2 + b/2 +c/2;
    cout << cavab;
  return 0;
}
