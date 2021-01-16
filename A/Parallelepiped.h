#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//void func() {

    long long int a, b, c;
    cin >> a >> b >> c;
    int x = (sqrt(a*b*c));
    int sumOfSides = 4*(x/a + x/b + x/c);

    cout << sumOfSides << endl;

    return 0;
}
