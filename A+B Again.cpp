#include <iostream>

using namespace std;

int main() {
  int t{}, n{};

  cin >> t;

  while (t--) {
    cin >> n;

    cout << ((n / 10) + (n % 10)) << "\n";
  }

  return 0;
}