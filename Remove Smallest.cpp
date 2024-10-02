#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t{}, n{}, a{};

    cin >> t;

    while (t--) {
        cin >> n;

        vector<int> values{};
        while (n--) {
            cin >> a;
            values.push_back(a);
        }

        sort(values.begin(), values.end());

        vector<int> result{};
        for (const int &item : values) {
            if (!result.empty() && item - result.back() <= 1)
              result.pop_back();

            result.push_back(item);
        }

        if (result.size() == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}