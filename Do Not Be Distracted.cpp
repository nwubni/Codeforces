#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  int t{}, n{};
  string task{};

  cin >> t;

  while (t--) {
    cin >> n;
    cin >> task;

    string build{};
    unordered_set<char> seen{};
    bool noticed{false};
    for (const char &c : task) {
      if (build.empty()) {
        build.push_back(c);
        continue;
      }

      if (build.back() != c) {
        if (seen.count(c)) {
          noticed = true;
          break;
        } else {
          seen.insert(build.back());
        }
      }

      build.push_back(c);
    }

    if (noticed)
      cout << "NO\n";
    else
      cout << "YES\n";
  }

  return 0;
}