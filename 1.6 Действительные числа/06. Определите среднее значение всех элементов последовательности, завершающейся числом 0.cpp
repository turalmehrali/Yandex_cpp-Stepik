#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    double a, say, cem;
    cin >> a;
    say = 0;
    cem += a;
    while(a != 0){
        cin >> a;
        cem += a;
        say += 1;
    }
    cout << setprecision(11);
    cout << cem / say;
  return 0;
}
