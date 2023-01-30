#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    string s{};
    unordered_set<char> set{};

    while (cin >> s)
    {
        for (char &c : s)
            if (c != '{' && c != '}' && c != ',')
                set.insert(c);

        if (s.back() == '}')
            break;
    }

    cout << set.size();

    return 0;
}