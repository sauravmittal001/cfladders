#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num <= 5-k) {
            count++;
        }
    }
    cout << (int)count/3 << endl;
    return 0;
}