#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <sstream>

using namespace std;

void removeVowels(string * s) {
    for (int i = 0; i < (*s).size(); i++) {

    }
}

void insertPeriod(string * s) {

}

bool isVowel(char c) {
    return (c == 'a' || c == 'o' || c == 'y' ||  c == 'e' || c == 'u' || c == 'i');
}

int main() {
//void func() {

    string s;
    cin >> s;

    string s1;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.size(); i++) {
//        cout << s1 << "---" << i << endl;
        if (!isVowel(s[i])) {
            s1 += ".";
            s1 += s[i];
        }
//        cout << s1 << endl;
    }

    cout << s1 << endl;

    return 0;
}