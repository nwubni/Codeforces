#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t{}, n{}, balloon{};
    char c{};
    vector<bool> solved{};

    cin >> t;

    while (t--)
    {
        cin >> n;

        balloon = 0;
        solved.resize(26, false);

        for (int i{1}; i <= n; i++)
        {
            cin >> c;

            balloon += solved[c - 'A'] ? 1 : 2;
            solved[c - 'A'] = true;
        }

        cout << balloon << '\n';

        solved.clear();
    }

    return 0;
}