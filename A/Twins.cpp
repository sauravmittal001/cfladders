#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    int n;
    cin >> n;
    int coins[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        sum += coins[i];
    }
    int size = (int)(sizeof(coins) / sizeof(coins[0]));
    sort(coins, coins + size, greater<>());

    int count = 0;
    int i = 0;
    for (; i < n && count <= (int) sum / 2; i++) {
        count += coins[i];
    }
    cout << i << endl;
    return 0;
}