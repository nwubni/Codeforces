#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  unordered_set<char> s{'c', 'o', 'd', 'e', 'f', 'r', 's'};
  int t{};
  char c{};

  cin >> t;

  while (t--) {
    cin >> c;

    if (s.count(c))
      cout << "yes\n";
    else
      cout << "no\n";
  }

  return 0;
}