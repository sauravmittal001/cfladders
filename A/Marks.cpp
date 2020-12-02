#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    string gradeSheet[n];
    set<int> bestStuList;

    for (int i = 0; i < n; i++) {
        string marks;
        cin >> marks;
        gradeSheet[i] = marks;
    }

    for (int i = 0; i < m; i++) {
        // obtain max marks
        int maxMarks = -1;
        for (int j = 0; j < n; j++) {
            int num = gradeSheet[j][i] - '0';
            if (num > maxMarks) {
                maxMarks = num;
            }
        }

        // which all students got max marks
        for (int j = 0; j < n; j++) {
            int num = gradeSheet[j][i] - '0';
            if (num == maxMarks) {
                bestStuList.insert(j+1);
            }
        }

    }
    cout << bestStuList.size() << endl;
    return 0;
}