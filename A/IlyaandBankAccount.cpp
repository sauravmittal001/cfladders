#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;


int main() {

    int n;
    cin >> n;

    if (n >= 0) {
        cout << n << endl;
    } else {
        int lastDig = abs(n%10), m = n/10;
        int secLastDig = abs(m%10);
        if (lastDig < secLastDig) {
            m = m/10;
            m = m*10 - lastDig;
        }
        cout << m << endl;
    }

    return 0;
}