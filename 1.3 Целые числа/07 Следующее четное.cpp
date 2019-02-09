#include <iostream>
using namespace std;
int main() {
  // put your code here
  int N;
  cin >> N;
  if(N%2 == 0) N = N + 2;
  else N = N + 1;
  cout << N;
  return 0;
}
