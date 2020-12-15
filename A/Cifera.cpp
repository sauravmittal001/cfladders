#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <sstream>

using namespace std;

int main() {
//void func() {

    double k, l;
    cin >> k >> l;

    int ans = -1;

    while (true) {
        l /= k;
        ans++;
        if (l == 0.0) {
            cout << "NO" << endl;
            break;
        }
        if (l == 1.0) {
            cout << "YES" << endl << ans << endl;
            break;
        }
    }

    return 0;
}