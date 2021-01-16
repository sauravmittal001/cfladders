#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

int gcd (int a, int b) {
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    } else if (a == b) {
        return a;
    }

    if (a > b) {
        return gcd(a-b, b);
    } else {
        return gcd(b-a, a);
    }
}

int main() {
//void func() {

    int n;
    cin >> n;

    int num1 = 0;

    for(int i = 0; i < n; i++) {
        int num2;
        cin >> num2;
        num1 = gcd(num1, num2);
    }
    cout << n*num1 << endl;
    return 0;
}