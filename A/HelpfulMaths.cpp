#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string summans;
    cin >> summans;
    int sizeNumsArr = (int) (summans.size()+1)/2;
    int numsArr[sizeNumsArr];
    int j = 0;
    for (int i = 0; i < summans.size(); i++) {
        if (i%2==0) {
            int x = summans[i] - '0';
            numsArr[j++] = x;
        }
    }
    int n = (int) (sizeof(numsArr) / sizeof(numsArr[0]));
    sort(numsArr, numsArr + n);
    for (int i = 0; i < sizeNumsArr-1; i++) {
        cout << numsArr[i] << "+";
    }
    cout << numsArr[sizeNumsArr-1] << endl;
    return 0;
}