#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t{}, n{}, v{}, sum{}, freq{}, i{};
    unordered_map<int, int> mp{};
    unordered_map<int, int> pos{};

    cin >> t;

    while (t--)
    {
        cin >> n;

        i = 1;
        sum = 0;
        freq = 0;
        int sz = n - 1;

        while (n--)
        {
            cin >> v;

            sum += v;
            mp[v]++;
            pos[v] = i;

            if (mp[v] == 2)
                freq = v;

            i++;
        }

        cout << pos[sum - (sz * freq)] << "\n";

        mp.clear();
        pos.clear();
    }

    return 0;
}