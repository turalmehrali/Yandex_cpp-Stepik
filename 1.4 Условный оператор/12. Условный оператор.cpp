#include <iostream>
using namespace std;
int main() {
  int a, b, x, y, m;
  cin >> a >> b >> x >> y;
  m = a * b;
  if (b < a) {
    m = b;
    b = a;
    a = m;
  }
  if (x < m) {
    m = x;
  }
  if (y < m) {
    m = y;
  }
  if (a - x < m) {
    m = a - x;
  }
  if (b - y < m) {
    m = b - y;
  }
  cout << m;
  return 0;
}
