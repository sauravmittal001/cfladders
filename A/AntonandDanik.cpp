#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    int n;
    string wins;
    cin >> n >> wins;

    int count = 0;

    for (int i = 0; i < n; i++) {
        char winner = wins[i];
        if(winner == 'A') {
            count++;
        } else if (winner == 'D'){
            count--;
        }
    }
    if (count > 0) {
        cout << "Anton" << endl;
    } else if (count < 0) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    return 0;
}