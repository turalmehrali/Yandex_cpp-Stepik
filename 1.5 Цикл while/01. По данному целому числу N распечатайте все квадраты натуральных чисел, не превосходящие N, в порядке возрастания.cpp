#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int N, i;
    cin >> N;
    i = 1;
    while(pow(i, 2) <= N){
        cout << pow(i, 2) << " ";
        i ++;
    }
  return 0;
}
