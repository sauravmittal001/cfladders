#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

bool wubAtI(string str, int i) {
    return (str[i] == 'W') && (str[i+1] == 'U') && (str[i+2] == 'B');
}


int main() {

    string str;
    cin >> str;
    for (int i = 0 ; i < str.size(); i++) {
        if (wubAtI(str, i)) {
            str[i] = ' ';
            str[i+1] = ' ';
            str[i+2] = ' ';
        }
    }

    istringstream iss (str);
    string word;
    while (iss >> word) {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}