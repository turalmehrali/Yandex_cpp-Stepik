#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int a;
  a = N%10 + ((N/10)%10) + N/100;
  cout << a;
  return 0;
}
