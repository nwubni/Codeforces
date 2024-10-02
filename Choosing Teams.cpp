#include <iostream>

using namespace std;

int main() {
  int n{}, k{}, y{}, ans{0};

  cin >> n >> k;

  while (n--) {
    cin >> y;

    ans += (y + k) <= 5;
  }

  cout << (ans / 3) << "\n";

  return 0;
}