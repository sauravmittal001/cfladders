#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

bool isCharVowel(char c) {
    string vow = "AEIOUY";
    int size = (int) vow.size();
    for (int j = 0; j < size; j++) {
        if (vow[j] == c) {
            return true;
        }
    }
    return false;
}

string longOrShort(string s) {
    int size = s.size();
    if (size > 10) {
        string firstChar(1 ,s[0]);

        stringstream ss;
        ss<<size-2;
        string num;
        ss>>num;

        string lastChar(1, s[size-1]);

        return firstChar.append(num.append(lastChar));
    } else {
        return s;
    }

}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cout << longOrShort(s) << endl;
    }
    return 0;
}