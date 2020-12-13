#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;

    return true;
}


bool alcoholOrYoung(const string& key) {
    set<string> drinks = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

    if (isNumber(key)) {
        return (stoi(key) < 18);
    }
    return (drinks.find(key) != drinks.end());
}

int main() {
//void func() {

    int n;
    cin >> n;

    int value = 0;
    string key;

    while (n--) {
        cin >> key;
        if (alcoholOrYoung(key)) {
            value++;
        }
    }

    cout << value << endl;

    return 0;
}