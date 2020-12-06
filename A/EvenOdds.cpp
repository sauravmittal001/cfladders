#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main() {

    long long n, k;
    cin >> n >> k;

    long long half = ceil((double)n/2);

    if (k > half) {
        cout << 2*(k-half) << endl;
    } else {
        cout << 2*k-1 << endl;
    }

    return 0;
}