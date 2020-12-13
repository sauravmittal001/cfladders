#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main() {
//void func() {

    string s;
    cin >> s;

    string hello = "hello";
//    xqjqmenkodml h zyzmmvofdngktygbbxbzpluzcohohmalko e uwfikb l l taaigv
    int j = 0;

    for (int i = 0; i < s.size(); i++) {
        if(s[i] == hello[j]) {
            j++;
        }
        if (j == 5){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}