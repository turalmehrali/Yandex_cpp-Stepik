#include <iostream>
#include<cmath>
using namespace std;
int main(){
    double a, b;
    cin >> a;
    b = trunc(a);
    cout << trunc((a - b) * 10);
  return 0;
}
