#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

vector<pair<int, int>> vect1, vect2;

bool contains(pair<int, int> p) {
    for (pair<int, int> entry : vect2) {
        if (entry.first == p.first && entry.second == p.second) {
            return true;
        }
    }
    return false;
}

int nums() {
    int mm = 0;
    for (int i = 0; i < vect1.size(); i++) {
        if (contains(vect1.at(i))) {
            mm++;
        }
    }
    return mm;
}

int main() {
//void func() {

    int n;
    cin >> n;
    int arr_x[n];
    int arr_y[n];
    for(int i = 0; i < n; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        arr_x[i] = num1;
        arr_y[i] = num2;
    }

    map<int, vector<int>> x, y;
    for (int i = 0; i < n; i++) {
        int key = arr_x[i];
        int value = arr_y[i];
        if (x.find(key) != x.end()) {
            x[key].push_back(value);
        } else {
            vector<int> v;
            v.push_back(value);
            x[key] = v;
        }
        if (y.find(value) != y.end()) {
            y[value].push_back(key);
        } else {
            vector<int> v;
            v.push_back(key);
            y[value] = v;
        }
    }

    for (pair<int, vector<int>> entry : x) {
        int key = entry.first;
        vector<int> value = x[key];
        sort(value.begin(), value.end());
        for (int i = 1; i < value.size() - 1; i++) {
            vect1.emplace_back(key, value.at(i));
        }
    }
    for (pair<int, vector<int>> entry : y) {
        int key = entry.first;
        vector<int> value = y[key];
        sort(value.begin(), value.end());
        for (int i = 1; i < value.size() - 1; i++) {
            vect2.emplace_back(value.at(i), key);
        }
    }

    cout << nums() << endl;


    return 0;
}