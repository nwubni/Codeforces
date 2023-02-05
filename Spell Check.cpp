#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t{}, n{}, count{};
    char c{};

    cin >> t;

    while (t--)
    {
        cin >> n;

        count = 0;
        unordered_map<char, int> mp{{'T', 0}, {'i', 0}, {'m', 0}, {'u', 0}, {'r', 0}};

        for (int i{1}; i <= n; i++)
        {
            cin >> c;

            if (mp.count(c) && mp[c] == 0)
            {
                mp[c]++;
                count++;
            }
        }

        if (count == 5 && n == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}