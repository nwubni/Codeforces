#include <iostream>

using namespace std;

int main()
{
    int t{}, h{}, m{}, ans{};

    cin >> t;

    while (t--)
    {
        cin >> h >> m;

        ans = (24 - h) * 60 - m;

        cout << ans << '\n';
    }

    return 0;
}