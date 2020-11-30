#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int pos1 = 0, neg1 = 0, minNum;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num == 1) {
            pos1++;
        } else {
            neg1++;
        }
    }
    int l, r;
    minNum = min(pos1, neg1);
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        int length = r - l + 1;
        if (length % 2 == 0 && minNum >= length/2) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}