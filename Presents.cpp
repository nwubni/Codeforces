#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n{}, v{};
    unordered_map<int, int> mp{};

    cin >> n;

    for (int i{1}; i <= n; i++)
    {
        cin >> v;
        mp[v] = i;
    }

    for (int i{1}; i <= n; i++)
        cout << mp[i] << " ";

    return 0;
}