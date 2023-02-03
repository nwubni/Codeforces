#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n{};
    unordered_set<int> set{};

    for (int i{1}; i <= 4; i++)
    {
        cin >> n;
        set.insert(n);
    }

    cout << 4 - set.size();

    return 0;
}