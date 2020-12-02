#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int width = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num > h) {
            width++;
        }
        width++;
    }
    cout << width << endl;
    return 0;
}