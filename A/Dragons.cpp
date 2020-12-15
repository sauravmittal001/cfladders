#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

int main() {
//void func() {

    int s, n;
    cin >> s >> n;
    vector<pair<int, int> > vect;
    for (int i = 0; i < n ;i++) {
        int num1, num2;
        cin >> num1 >> num2;
        vect.emplace_back(num1, num2);
    }
    sort(vect.begin(), vect.end());

    for(pair<int, int> entry : vect) {
        int xi = entry.first;
        int yi = entry.second;
        if (xi >= s) {
            cout << "NO" << endl;
            return 0;
        }
        s += yi;
    }

    cout << "YES" << endl;
    return 0;
}