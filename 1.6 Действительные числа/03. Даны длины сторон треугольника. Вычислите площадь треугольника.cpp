#include <iostream>
#include<cmath>
using namespace std;
int main(){
    double a, b, c, p;
    cin >> a;
    cin >> b;
    cin >> c;
    p = (a + b + c) / 2;
    cout << sqrt(p * (p - a) * (p - b) * (p - c));
  return 0;
}
