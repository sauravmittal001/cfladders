#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;


int main() {

    int n, k;
    cin >> n >> k;

    int maxJoy = INT32_MIN;

    while (n--) {
        int f, t;
        cin >> f >> t;
        int joy = (t > k ? f-(t-k) : f);
        maxJoy = max(maxJoy, joy);
    }

    cout << maxJoy << endl;
    return 0;
}