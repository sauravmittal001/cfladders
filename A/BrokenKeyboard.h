#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>

using namespace std;

char intToChar(int number) {
    return number + 97;
}

int main() {
//void func() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // make the data structure
        char letters[26];
        bool isWorking[26];
        for (int i = 0; i < 26; i++) letters[i] = intToChar(i);
        for (int i = 0; i < 26; i++) isWorking[i] = false;

        for (int i = 0; i < s.size();) {
            char c = s[i];
            int count = 0;
            while (s[i] == c) {
                count++;
                i++;
                if (i >= s.size())
                    break;
            }
            int index = c - 97;
            isWorking[index] = isWorking[index] || (count % 2 == 1);
        }
        string ans = "";
        for (int i = 0; i < 26; i++) {
            if(isWorking[i]) {
                ans += letters[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
