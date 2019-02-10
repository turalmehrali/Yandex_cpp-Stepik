#include <iostream>
using namespace std;
int main() {
    int a, i;
    cin >> a;
    i = 2;
    while(i <= a){
        if(a % i == 0){
            cout << i;
            break;
        }
        i ++;
    }
  return 0;
}
