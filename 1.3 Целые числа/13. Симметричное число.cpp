#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> c;
  a = (c / 1000 - c % 10 );
  b = (c % 1000 / 100 - c % 100 / 10);
  cout << a * a + b * b + 1;
  return 0;
}
