#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if(a == c || b == d){
        cout << "NO";
    }
    else if(abs(c - a) == abs(d - b)){
        cout << "YES";
    }
    else
        cout << "NO";
  return 0;
}
