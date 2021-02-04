#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

map<string, int> m = {
        {"C", 0},
        {"C#", 1},
        {"D", 2},
        {"D#", 3},
        {"E", 4},
        {"F", 5},
        {"F#", 6},
        {"G", 7},
        {"G#", 8},
        {"A", 9},
        {"B", 10},
        {"H", 11}
};

int parse(string s) {
    return m[s];
}

string check(vector<int>& v) {
    int first, second;
    
    if (v[1] > v[0]) {
        first = v[1] - v[0];
    } else {
        first = 12 - (v[0] - v[1]);
    }
    
    if (v[2] > v[1]) {
        second = v[2] - v[1];
    } else {
        second = 12 - (v[1] - v[2]);
    }
    
    if (first == 3 && second == 4) {
        return "minor";
    } else if (second == 3 && first == 4) {
        return "major";
    } else {
        return "strange";
    }
    
}

int main() {
//void func() {
    
    vector<int> v; v.assign(3, -1);
    
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        v[i] = m[s];
    }
    
    vector<vector<int> > pnc;
    pnc = {
            {v[0], v[1], v[2]},
            {v[0], v[2], v[1]},
            {v[1], v[0], v[2]},
            {v[1], v[2], v[0]},
            {v[2], v[0], v[1]},
            {v[2], v[1], v[0]}
    };
    
    for (int i = 0; i < pnc.size(); i++) {
        vector<int> b = pnc[i];
        if (check(b) == "minor") {
            cout << "minor" << endl;
//            return;
            return 0;
        } else if (check(b) == "major") {
            cout << "major" << endl;
//            return;
            return 0;
        }
    }
    cout << "strange" << endl;
    return 0;
}
