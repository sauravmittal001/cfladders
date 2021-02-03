#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int a) {
    while (a!=0) {
        if (a%10 == 8) {
            return true;
        }
        a /=10;
    }
    return false;
}

int main() {
//void func() {

    int a;
    cin >> a;
    for (int i = 1; i < 10e9; i++) {
        if(check(abs(a+i))) {
            cout << i << endl;
            break;
        }
    }
    

    return 0;
}
