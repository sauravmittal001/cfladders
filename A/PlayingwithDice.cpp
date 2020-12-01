#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int aWin = 0, draw = 0, bWin = 0;
    for (int i = 1; i <= 6; i++) {
        int diff = abs(a-i) - abs(b-i);
        if (diff < 0) {
            aWin++;
        } else if (diff == 0) {
            draw++;
        } else {
            bWin++;
        }
    }
    cout << aWin << " " << draw << " " << bWin << endl;
    return 0;
}