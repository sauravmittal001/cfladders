#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <sstream>

using namespace std;

int r1, r2, c1, c2, d1, d2, num1, num2, num3, num4;

bool inRange(int num) { return (num >= 1 && num <= 9);}

bool isValid() {
    set<int> nums;
    nums.insert(num1);
    nums.insert(num2);
    nums.insert(num3);
    nums.insert(num4);
    bool flag = (inRange(num1) && inRange(num2) && inRange(num3) && inRange(num4));
    return (flag&& nums.size() == 4 && d1 == num1 + num4 && d2 == num2 + num3 && c2 == num2 + num4);
}

int main() {
//void func() {
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for (num1 = 1; num1 <= 9; num1++) {
        num2 = r1 - num1;
        num3 = c1 - num1;
        num4 = r2 - num3;
        if (isValid()) {
            cout << num1 << " " << num2 << endl << num3 << " " << num4 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}