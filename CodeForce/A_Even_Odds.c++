#include <iostream>
using namespace std;

int main() {
    long long numSiz, index;
    cin >> numSiz >> index;

    long long oddCount = (numSiz + 1) / 2; // Number of odd positions

    if (index < oddCount) {
        // The index is in the odd part
        cout << 2 * index + 1 << endl;
    } else {
        // The index is in the even part
        index -= oddCount;
        cout << 2 * index << endl;
    }

    return 0;
}
