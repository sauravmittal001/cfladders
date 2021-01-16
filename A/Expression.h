#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>

using namespace std;

int maxNum(int a, int b, int c) {
    return max((a+b)*c, max((min(a, c)+b)*max(a, c), max(a*(b+c), max(a*b*c, a+b+c) ) ) );
}

int main() {
//void func() {

    int a, b, c;
    cin >> a >> b >> c;
//    if (a == 1) {
//        cout << (a+b)*c << endl;
//    } else if (b == 1) {
//        cout << (min(a, c)+b)*max(a, c) << endl;
//    } else if (c == 1) {
//        cout << a*(b+c) << endl;
//    } else {
//        cout << a*(b*c) << endl;
//    }
    cout << maxNum(a, b, c) << endl;
    return 0;
}


