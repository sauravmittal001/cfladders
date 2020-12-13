#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <sstream>

using namespace std;

int f(string time) {
    int HH = stoi(time.substr(0, 2));
    int MM = stoi(time.substr(3, 5));
    int num = HH*60+MM;
    return num;
}


int main() {
//void func() {

    string arr[] = {"00:00", "01:10", "02:20", "03:30", "04:40", "05:50", "10:01", "11:11", "12:21", "13:31", "14:41", "15:51", "20:02", "21:12", "22:22", "23:32"};

    string time;
    cin >> time;

    for (int i = 0; i < 15; i++) {
        int num1 = f(arr[i]);
        int num2 = f(time);
        int num3 = f(arr[i+1]);

        if (num1 <= num2 && num2 < num3) {
            cout << arr[i+1] << endl;
            return 0;
        }
    }
    cout << arr[0] << endl;
    return 0;
}