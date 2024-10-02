#include <iostream>

using namespace std;

int main() {
  int t{}, a{}, b{}, c{};

  cin >> t;

  while (t--) {
    cin >> a >> b >> c;

    if (a == b)
      cout << c << "\n";
    if (a == c)
      cout << b << "\n";
    if (b == c)
      cout << a << "\n";
  }

  return 0;
}