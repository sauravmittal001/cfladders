#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

bool flag = true;
int value1, value2;
string team1, team2;

void f(const string& key) {
    if (key == team1) {
        value1++;
    } else if (key == team2) {
        value2++;
    } else {
        if (flag) {
            team1 = key;
            value1++;
            flag = false;
        } else{
            team2 = key;
            value2++;
        }
    }
}

int main() {
//void func() {

    int n;
    cin >> n;

    string key;
    while (n--) {
        cin >> key;
        f(key);
    }

    if (value1 > value2) {
        cout << team1 << endl;
    } else {
        cout << team2 << endl;
    }

    return 0;
}