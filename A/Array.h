#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> neg) {
    cout << neg.size() << " ";
    for (int i = 0; i < neg.size()-1; i++)
        cout << neg[i] << " ";
    cout << neg[neg.size()-1] << endl;
}

int main() {
//void func() {

    int n;
    cin >> n;
    vector<int> v;
    
    bool hasNotPositive = true;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        if (x > 0) {
            hasNotPositive = false;
        }
    }
    
    vector<int> neg, pos, zero;
    
    int putPositive = 0;
    
    for (int i = 0; i < n; i++) {
        if (hasNotPositive && putPositive != 2 && v[i] < 0) {
            pos.push_back(v[i]);
            putPositive++;
            continue;
        }
        if (v[i] < 0) {
            neg.push_back(v[i]);
        } else if (v[i] > 0) {
            pos.push_back(v[i]);
        } else {
            zero.push_back(v[i]);
        }
    }
    
    if (neg.size()%2 == 0) {
        cout << neg.size()-1 << " ";
        for (int i = 0; i < neg.size()-2; i++)
            cout << neg[i] << " ";
        cout << neg[neg.size()-2] << endl;
    
        cout << pos.size() << " ";
        for (int i = 0; i < pos.size()-1; i++)
            cout << pos[i] << " ";
        cout << pos[pos.size()-1] << endl;
    
        cout << zero.size()+1 << " ";
        for (int i = 0; i < zero.size(); i++)
            cout << zero[i] << " ";
        cout << neg[neg.size()-1] << endl;
    } else {
        print(neg);
        print(pos);
        print(zero);
    }
    
    return 0;
}
