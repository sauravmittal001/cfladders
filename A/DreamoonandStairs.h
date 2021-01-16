#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
//void func() {

    int n, m;
    cin >> n >> m;
    int h = ceil(double(n)/2);
    for (int i = h; i <= n; i++) {
        if (i%m == 0) {
            cout << i << endl;
//            return;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}


