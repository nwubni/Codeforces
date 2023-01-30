#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t{}, a{};
    vector<int> v{};

    cin >> t;

    while (t--)
    {
        for (int i{1}; i <= 3; i++)
        {
            cin >> a;

            v.push_back(a);
        }

        sort(v.begin(), v.end());

        if ((v[0] + v[1]) == v[2])
            cout << "YES\n";
        else
            cout << "NO\n";

        v.clear();
    }

    return 0;
}