#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//void func() {

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> vect;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vect.emplace_back(num);
    }

    sort(vect.begin(), vect.end(), greater<>());

//    for (int i = 0; i < n; i++) {
//        cout << vect.at(i) << " ";
//    }
//    cout << endl;

    int count = k;
    if (count >= m) {
        cout << 0 << endl;
        return 0;
    } else {
        for (int i = 0; i < n; i++) {
            count += vect.at(i) -1;
            if (count >= m) {
//            cout << "dsf " << count << " " << m << endl;
                cout << i+1 << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
