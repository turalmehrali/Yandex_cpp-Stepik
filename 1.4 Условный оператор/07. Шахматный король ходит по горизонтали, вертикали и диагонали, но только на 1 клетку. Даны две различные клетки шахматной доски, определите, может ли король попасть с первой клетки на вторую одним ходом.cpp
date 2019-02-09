#include <iostream>
using namespace std;
int main() {
  // put your code here
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if(a == c && abs(d - b) == 1){
        cout << "YES";
    }
    else if(b == d && abs(c - a) == 1){
        cout << "YES";
    }
    else if(abs(c - a) == 1 && abs(d - b) == 1){
        cout << "YES";
    }
    else
        cout << "NO";
  return 0;
}
