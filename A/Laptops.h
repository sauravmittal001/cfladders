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
    map<int, int> m;
    while (n--) {
        int price, quality;
        cin >> price >> quality;
        if (m.find(quality) != m.end()) {
            m[quality] = max(m[quality], price);
        } else {
            m[quality] = price;
        }
    }
    
    int maxPrice = -1;
    for (pair<int, int> laptop: m) {
        int price = laptop.second;
        if (maxPrice == -1) {
            maxPrice = price;
            continue;
        }
        if (price < maxPrice) {
            cout << "Happy Alex" << endl;
            return 0;
        } else {
            maxPrice = price;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
