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

    int n, v;
    cin >> n >> v;

    vector<int> sellers;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        bool flag = true;
        for (int j = 0; j < k; j++) {
            int num;
            cin >> num;
            if (num < v && flag) {
                sellers.push_back(i+1);
                flag = false;
            }
        }
    }

    sort(sellers.begin(), sellers.end());
    cout << sellers.size() << endl;
    for (int i = 0; i < sellers.size(); i++) {
        cout << sellers.at(i) << " ";
    }
    cout << endl;
    return 0;
}