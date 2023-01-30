#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t{}, k{};
    vector<int> cache{0};

    for (int i{1}; cache.size() < 1002; i++)
        if (i % 3 != 0 && i % 10 != 3)
            cache.push_back(i);

    cin >> t;

    while (t--)
    {
        cin >> k;
        cout << cache[k] << '\n';
    }

    return 0;
}