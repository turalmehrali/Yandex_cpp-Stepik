#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if(abs(c - a) == 1 && abs(d - b) == 2){
        cout << "YES";
    }
    else if(abs(c - a) == 2 && abs(d - b) == 1){
        cout << "YES";
    }
    else
        cout << "NO";
  return 0;
}
