#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n{}, q{}, v{};
    unordered_set<int> set{};

    cin >> n >> q;

    while (q--)
    {
        cin >> v;
        set.insert(v);
    }

    cin >> q;

    while (q--)
    {
        cin >> v;
        set.insert(v);
    }

    if (set.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}