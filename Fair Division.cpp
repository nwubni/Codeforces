#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t, n, a;

  cin >> t;

  while (t--) {
    cin >> n;

    vector<int> values{};

    while (n--) {
      cin >> a;

      values.push_back(a);
    }

    sort(values.rbegin(), values.rend());

    int a{0}, b{0};

    for (const int &item : values) {
      if (a < b)
        a += item;
      else
        b += item;
    }

    if (a == b)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}