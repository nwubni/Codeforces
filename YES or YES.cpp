#include <iostream>

using namespace std;

int main()
{
    int t{};
    char c{};
    string s{};

    cin >> t;

    while (t--)
    {
        for (int i{1}; i <= 3; i++)
        {
            cin >> c;
            s.push_back(tolower(c));
        }

        if (s == "yes")
            cout << "YES\n";
        else
            cout << "NO\n";

        s.clear();
    }

    return 0;
}