#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <sstream>

using namespace std;

string winner(char trump, string cardTwo, string cardOne) {

    map<char, int> m;

    m['6'] = 0;
    m['7'] = 1;
    m['8'] = 2;
    m['9'] = 3;
    m['T'] = 4;
    m['J'] = 5;
    m['Q'] = 6;
    m['K'] = 7;
    m['A'] = 8;

    if (cardTwo[1] == cardOne[1] && m[cardTwo[0]] > m[cardOne[0]]) {
        return "YES";
    }

    if (cardTwo[1] == trump && cardOne[1] != trump) {
        return "YES";
    }
    return "NO";

}

int main() {
//void func() {

    char trump;
    string cardOne, cardTwo;
    cin >> trump >> cardOne >> cardTwo;

    cout << winner(trump, cardOne, cardTwo) << endl;

    return 0;
}