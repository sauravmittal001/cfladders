#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    int p, q;
    set<int> levels;
    cin >> p;
    while (p--) {
        int num;
        cin >> num;
        if (!levels.count(num)) {
            levels.insert(num);
        }
    }
    cin >> q;
    while (q--) {
        int num;
        cin >> num;
        if (!levels.count(num)) {
            levels.insert(num);
        }
    }

    if (levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}