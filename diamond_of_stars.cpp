                                                                                                                                  *
                                                                                                                                 ***
                                                                                                                                *****
                                                                                                                                 ***
                                                                                                                                  *
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int i = 1, j, k = n / 2;
  int m = k + 1, a = 0, x, stars;
  while (i <= m) {
    j = 1;
    while (j <= k) {
      cout << " ";
      j++;
    }
    k--;
    j = 1;
    x = 2 * a + 1;
    while (j <= x) {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
    a++;
  }
  k = 1, i = 1;
  stars = n - 2;
  while (i < m) {
    j = 1;
    while (j <= k) {
      cout << " ";
      j++;
    }
    k++;
    j = 1;

    while (j <= stars) {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
    stars = stars - 2;
  }
}
