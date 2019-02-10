#include <iostream>
using namespace std;
int main(){
    int a, cem;
    cin >> a;
    cem = 0;
    while(a != 0){
        cem += a;
        cin >> a;
    }
    cout << cem;
  return 0;
}
