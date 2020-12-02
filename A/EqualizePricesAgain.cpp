#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        long long count = 0;
        for (int i = 0; i < n; i++) {
            long long int num;
            cin >> num;
            count += num;
        }
        cout << fixed << (long long int) ceil((double)count/n) << endl;
    }
    return 0;
}