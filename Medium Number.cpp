#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t{}, n{};
    vector<int> v{};

    cin >> t;

    while (t--)
    {
        for (int i{1}; i <= 3; i++)
        {
            cin >> n;
            v.push_back(n);
        }

        sort(v.begin(), v.end());

        cout << v[1] << '\n';
        v.clear();
    }

    return 0;
}