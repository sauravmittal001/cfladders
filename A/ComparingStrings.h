#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool hasDuplicates(string a) {
    bool flag = false;
    int size = a.size();
    for (int i = 0; i < size; i++) {
        char c = a[i];
        for (int j = i+1; j < size; j++) {
            if (a[j] == c) {
                flag = true;
                break;
            }
        }
    }
    return flag;
}

int main() {
//void func() {

    string a, b;
    cin >> a >> b;
    string ans = "NO";
    int size = a.size();
    if (a.size() == b.size()) {
        char ai[size], bi[size];
        int pointer = 0;
        for (int i = 0; i < size; i++) {
            if (a[i] != b[i]) {
                ai[pointer] = a[i];
                bi[pointer] = b[i];
                pointer++;
            }
        }

        if (pointer == 0) {
            if (hasDuplicates(a)) {
                ans = "YES";
            }
        } else if (pointer == 2) {
            if (ai[0] == bi[1] && ai[1] == bi[0]) {
                ans = "YES";
            }
        }


    }

    cout << ans << endl;
    return 0;
}
