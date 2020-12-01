#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    string in;
    getline(cin, in);
    set<char> letters;
    int size = in.size();
    for (int i = 1; i < size && size != 2; i += 3) {
        if (!letters.count(in[i])) {
            letters.insert(in[i]);
        }
    }
    cout << letters.size() << endl;
    return 0;
}