#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool check(string str) {
    for(int i = 0; i < str.length(); i++)
        if (str[i] != str[str.length()-i-1]) return false;
    return true;
}

int main() {
//void func() {

    string str;
    int k;
    cin >> str >> k;
    
    if (str.length()%k!= 0) {
        cout << "NO" << endl;
//        return ;
        return 0;
    }
        int pl = str.length()/k;
        vector<string> v; v.assign(k, "");
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < pl; j++) {
                v[i] = v[i] + (str[pl*i+j]);
            }
        }
        for (string palindrome : v) {
            if (!check(palindrome)) {
                cout << "NO" << endl;
//                return;
                return 0;
            }
        }
        cout << "YES" << endl;

    return 0;
}
