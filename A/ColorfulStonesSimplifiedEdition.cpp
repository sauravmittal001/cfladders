#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int j = 0;
    for (int i = 0; i < (int)t.size(); i++) {
        if (s[j] == t[i]) {
            j++;
        }
        if (j == (int)s.size()-1) {
            break;
        }
    }
    cout << j+1 << endl;
    return 0;
}