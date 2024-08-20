#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int xr, yr, xw, yw;

  cin >> xr >> yr;
  cin >> xw >> yw;

  double distance_r = sqrt(pow(xr, 2) + pow(yr, 2));
  double distance_w = sqrt(pow(xw, 2) + pow(yw, 2));

  if (distance_r < distance_w) {
    if (xr > 10000 || xr < -10000 || yr > 10000 || yr < -10000) {
      cout << "Wil";
      return 0;
    } else {
      cout << "Russo";
    }
  } else if (distance_r == distance_w) {
    cout << "Empate";
  } else {
    if (xw > 10000 || xw < -10000 || yw > 10000 || yw < -10000) {
      cout << "Russo";
      return 0;
    } else {
      cout << "Wil";
    }
  }

  return 0;
}