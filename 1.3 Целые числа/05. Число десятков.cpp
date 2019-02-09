#include <iostream>
using namespace std;
int main() {
  // put your code here
  int N;
  cin >> N;
  cout << ((N - (N%10))/10)%10;
  return 0;
}
