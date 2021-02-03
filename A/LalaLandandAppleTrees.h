#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//void func() {

    int n;
    cin >> n;
    vector<pair<int, int> > neg, pos;
    for(int i = 0; i < n; i++) {
        int xi, ai;
        cin >> xi >> ai;
        if (xi < 0) {
            neg.emplace_back(xi, ai);
        } else {
            pos.emplace_back(xi, ai);
        }
    }
    
    sort(neg.rbegin(), neg.rend());
    sort(pos.begin(), pos.end());
    
    int c = 0;
    if (neg.size() < pos.size()) {
        for (int i = 0; i < neg.size(); i++)
            c = c+neg[i].second+pos[i].second;
        c += pos[neg.size()].second;
    } else if (neg.size() > pos.size()) {
        for (int i = 0; i < pos.size(); i++)
            c = c+neg[i].second+pos[i].second;
        c += neg[pos.size()].second;
    } else {
        for (int i = 0; i < pos.size(); i++)
            c = c+neg[i].second+pos[i].second;
    }
    cout << c << endl;
    
    return 0;
}
