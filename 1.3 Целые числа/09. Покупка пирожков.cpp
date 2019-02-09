#include <iostream>
using namespace std;
int main() {
  // put your code here
    int A;
    int B;
    int N;
    cin >> A;
    cin >> B;
    cin >> N;
    int rubllar = N*A;
    int qepikler = N*B;
    if(qepikler >= 100) {rubllar = rubllar + qepikler/100;
                         qepikler = qepikler - (qepikler/100)*100;
                        }
    cout << rubllar << " " << qepikler;
  return 0;
}
