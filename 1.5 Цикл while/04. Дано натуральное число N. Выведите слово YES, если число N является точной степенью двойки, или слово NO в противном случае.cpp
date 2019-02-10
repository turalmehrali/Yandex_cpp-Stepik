#include <iostream>
using namespace std;
int main(){
    int N, i;
    cin >> N;
    i = 1;
    while (i < N) {
        i = i * 2;
    }
    if (i == N) {
        cout << "YES";
    }
    else
        cout << "NO";
  return 0;
}
