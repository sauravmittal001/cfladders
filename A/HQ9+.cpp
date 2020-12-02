#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

bool isAJoke(char ch) {
    if (ch == 'H' || ch == 'Q' || ch == '9') {
        return true;
    }
    return false;

}

int main() {

    string line;
    getline(cin, line);

    for (int i = 0; i < line.size(); i++) {
        if (isAJoke(line[i])) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}