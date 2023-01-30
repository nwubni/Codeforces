#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n{}, t{};
    string s{};
    vector<int> pos{};

    cin >> n >> t >> s;

    for (int i{0}; i < n; i++)
        if (s[i] == 'B')
            pos.push_back(i);

    while (t--)
    {
        for (int &p : pos)
        {
            if (p + 1 < n && s[p + 1] == 'G')
            {
                swap(s[p], s[p + 1]);
                p++;
            }
        }

        if (!pos.empty() && pos.back() >= n)
            pos.pop_back();
    }

    cout << s;

    return 0;
}