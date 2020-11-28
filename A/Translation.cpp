#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void reverse(string * word) {
    int size = word->size();
    for (int i = 0; i < size/2; i++) {
        char ch = (*word)[i];
        (*word)[i] = (*word)[size-i-1];
        (*word)[size-i-1] = ch;
    }
}

int main() {
    string s;
    string t;
    getline(cin, s);
    getline(cin, t);
    istringstream iss(s);
    string line;
    while (iss >> s) {
        reverse(&s);
        line = line.append(s.append(" "));
    }
    if (line.size() >=1) {
        line.erase(line.end()-1);
    }
    if (line == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
