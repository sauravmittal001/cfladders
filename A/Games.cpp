#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int home[n];
    int guest[n];
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }
            if (home[j] == guest[i]) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}