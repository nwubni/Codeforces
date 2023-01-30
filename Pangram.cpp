#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n{};
    char c{};
    unordered_set<char> s{};

    cin >> n;

    while (n--)
    {
        cin >> c;
        s.insert(tolower(c));
    }

    if (s.size() == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}