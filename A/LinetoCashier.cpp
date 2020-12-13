#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main() {
//void func() {

    int n;
    cin >> n;
    int numOfPeople[n];
    for (int i = 0; i < n; cin >> numOfPeople[i++]);
    int minTime = INT32_MAX;
    for (int i = 0; i < n; i++) {
        int totalTime = 15*numOfPeople[i];
        for (int j = 0; j < numOfPeople[i]; j++) {
            int num;
            cin >> num;
            totalTime += num*5;
        }
        if (minTime > totalTime) {
            minTime = totalTime;
        }
    }

    cout << minTime << endl;
    return 0;
}