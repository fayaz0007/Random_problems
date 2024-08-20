#include <iostream>

using namespace std;

int main() {
  int maxcount = 0;
  int maxnumber = 0;
  int count = 0;
  int i;
  int n;

  cin >> n;

  for (i = 1; i <= n; i++) {
    count = 0;
    int temp = i;  // Store the value of 'i' in a temporary variable

    while (temp % 2 == 0) {
      count++;
      temp /= 2;  // Divide 'temp' by 2 to find consecutive even numbers
    }

    if (count > maxcount) {
      maxcount = count;
      maxnumber = i;
    }
  }

  cout << maxnumber << endl;

  return 0;
}