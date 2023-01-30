#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int t{}, n{}, a{};

    cin >> t;

    while (t--)
    {
        cin >> n;

        int mini{INT_MAX}, maxi{0};

        while (n--)
        {
            cin >> a;

            mini = min(mini, a);
            maxi = max(maxi, a);
        }

        cout << maxi - mini << '\n';
    }

    return 0;
}