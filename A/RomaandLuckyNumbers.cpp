#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

bool hasNotMoreThanK(int n, int k) {
    while (n != 0) {
        int digit = n%10;
        n /= 10;
        if (digit == 4 || digit == 7) {
            k--;
            if (k == -1) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (hasNotMoreThanK(num, k)) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}