#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//void func() {

    int n, k;
    cin >> n >> k;

    // put values in vector and sort it
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int pi, ti;
        cin >> pi >> ti;
        v.emplace_back(pi*51-ti);
    }
    sort(v.begin(), v.end(), greater<>());

    // give positions
    int positionIndex = 0;
    int position[n];
    for (int i = 0; i < n; i++) position[i] = 0;

    for (int i = 0; i < n;) {
        int p0 = v.at(i);
        int count = 0;
        int pi;
        pi = v.at(i);
        while (pi == p0) {
            count++;
            i++;
                if (i >= n)
                break;
            pi = v.at(i);
        }
        for (int j = positionIndex; j < positionIndex + count; j++) position[j] = count;

        positionIndex += count;
    }

    //print values
//    for (int i = 0; i < n; i++){
//        cout << v[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < n; i++){
//        cout << position[i] << " ";
//    }
//    cout << endl;
    cout << position[k-1] << endl;

    return 0;
}
