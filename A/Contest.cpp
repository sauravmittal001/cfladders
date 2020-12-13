#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main() {
//void func() {

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double misha = max(3*double(a/10), a-a*double(c/250));
    double vasya = max(3*double(b/10), b-b*double(d/250));

    if (misha > vasya) {
        cout << "Misha" << endl;
    }
    else if (vasya > misha) {
        cout << "Vasya" << endl;
    } else {
        cout << "Tie" << endl;
    }


    return 0;
}