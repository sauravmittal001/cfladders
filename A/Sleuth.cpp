#include <iostream>
#include <string>
#include <algorithm>

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

bool isCharConsonent(char c) {
    string cons = "BCDFGHJKLMNPQRSTVWXZ";
    int size = (int) cons.size();
    for (int j = 0; j < size; j++){
        if (cons[j] == c) {
            return true;
        }
    }
    return false;
}

int main() {
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (int i = (int) s.size() - 1; i >=0 ;i--) {
//        cout << i << " " << s[i] << endl;
        if(isCharVowel(s[i])) {
//            cout << i << endl;
            cout << "YES" << endl;
            return 0;
        }
        if (isCharConsonent(s[i])) {
//            cout << i << endl;
            cout << "NO" << endl;
            return 0;
        }
    }

}