#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

long int remZero(long int a) {
    long int A = 0;
    int j = 0;

    while (a != 0) {
        long int lastDigit = a%10;
        if (lastDigit != 0) {
            A += lastDigit*long(pow(10, j++));
        }
        a /= 10;
    }

    return A;
}

int main() {
//void func() {

    long int a, b;
    cin >> a >> b;

    long int c = a + b;

    a = remZero(a);
    b = remZero(b);

    if (a+b == remZero(c)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}