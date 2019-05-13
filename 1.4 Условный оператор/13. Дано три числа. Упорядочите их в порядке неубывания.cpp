#include <iostream>
using namespace std;
int main() {
  int a, b, c, min, max;
    cin >> a >> b >> c;
    if(a > b){
        max = a;
        a = b;
        b = max;
    }
    if(a > c){
        max = a;
        a = c;
        c = max;
    }
    if(b > c){
        max = b;
        b = c;
        c = max;
    }
    cout << a << " " << b <<" " << c;
  return 0;   
}
