#include <iostream>
#include <unordered_set>

using namespace std;

bool is_distinct(int n)
{
    unordered_set<int> set{};

    while (n)
    {
        int r = n % 10;

        if (set.count(r))
            return false;

        set.insert(r);
        n /= 10;
    }

    return true;
}

int main()
{
    int y{};

    cin >> y;

    y++;

    while (!is_distinct(y))
        y++;

    cout << y;

    return 0;
}