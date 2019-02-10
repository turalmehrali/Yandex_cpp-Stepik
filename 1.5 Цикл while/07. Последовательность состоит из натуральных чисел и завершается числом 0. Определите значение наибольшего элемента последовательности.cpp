#include <iostream>
using namespace std;
int main() {
    int a, boyuk;
    cin >> a;
    boyuk = a;
    while(a != 0){
        cin >> a;
        if(a > boyuk){
            boyuk = a;
        }
    }
    cout << boyuk;
  return 0;
}
