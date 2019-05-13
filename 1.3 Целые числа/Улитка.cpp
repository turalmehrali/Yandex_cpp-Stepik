#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  cout <<((a - b) + (b - c) - 1) / (b - c) + 1;
  return 0;
}
