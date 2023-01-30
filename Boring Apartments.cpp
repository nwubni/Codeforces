#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int t{}, x{};
    vector<int> range_sum{0, 1, 3, 6, 10};

    cin >> t;

    while (t--)
    {
        cin >> x;

        int digits = log10(x) + 1;
        int ans = range_sum[digits];
        int n = x % 10;

        while (--n)
            ans += range_sum[4];

        cout << ans << '\n';
    }

    return 0;
}