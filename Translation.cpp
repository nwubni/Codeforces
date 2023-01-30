#include <iostream>

using namespace std;

int main()
{
    string s{}, t{};

    cin >> s >> t;

    int n = s.length();
    bool ok{true};

    for (int i{0}; ok && i < n; i++)
        if (s[i] != t[n - i - 1])
            ok = false;

    if (ok)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}