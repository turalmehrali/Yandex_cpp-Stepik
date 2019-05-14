#include <iostream>
using namespace std;
int main() {
    int a, boyuk, say;
    cin >> a;
    say = 0;
    boyuk = a;
    while(a != 0){
        if(boyuk == a){
            say += 1;
        }
        else if(boyuk < a){
            boyuk = a;
            say = 1;
        }
        cin >> a;
    }
    cout << say;
  return 0;
}
