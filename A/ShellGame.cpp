#include <iostream>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
//void func() {

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int index;
    cin >> index;

    for (int i = 0; i < 3; i++) {
        int a, b;
        cin >> a >> b;
        if (a == index) {
            index = b;
        } else if (b == index) {
            index = a;
        }
    }
    cout << index;
    return 0;
}