#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
//void func() {

    int n;
    cin >> n;
    string str;
    cin >> str;
    map<char, int> m;
    int count = 0;
    for (int i = 0; i < 2*n-2; i++) {
        char c = str[i];
        if (i%2 == 0) {
            if (m.find(c) != m.end()) {
                m[c] = m[c] + 1;
            } else {
                m[c] = 1;
            }
        } else {
            char c = tolower(str[i]);
            if (m.find(c) != m.end()) {
                if (m[c] > 0) {
                    m[c] = m[c] - 1;
                } else {
                    count++;
                }
            } else {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
