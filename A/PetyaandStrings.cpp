#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {


    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

    int compare = s1.compare(s2);
    if (compare > 0) {
        cout << 1 << endl;
    } else if (compare < 0) {
        cout << -1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}