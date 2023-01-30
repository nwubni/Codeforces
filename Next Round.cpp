#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n{}, k{}, ans{0}, val{}, kth{INT_MAX};

    cin >> n >> k;

    while (n--)
    {
        cin >> val;

        if (k <= 0)
        {
            ans += val && val >= kth;
            continue;
        }

        k--;

        if (k == 0)
            kth = val;

        ans += val > 0;
    }

    cout << ans;
}