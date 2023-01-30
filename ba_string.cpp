#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    int n, k, x;
    string ans;

    cin >> T;

    while (T--)
    {
        cin >> n >> k, x;
        ans = "";

        int count = 0;

        while(n--)
        {
            char c;
            cin >> c;

            if (c == '*')
                count++;
            else if (c != '*')
            {
                if (ans.length() == 0 && count)
                {
                    ans = "b";
                    count = 0;
                }

                count *= k;

                while (count-- && ans.length() <= x)
                    ans += 'b';

                ans += c;
            }

            cout << ans << "\n";
        }
    }
    return 0;
}