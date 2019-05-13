#include <iostream>
using namespace std;
int main() {
  int a, b, c; 
  cin >> a >> b; 
  c = a * b - 109*((a * b) / 109) + 109 ;
  cout << c - (c / 109) * 109 ;
  return 0;
}
