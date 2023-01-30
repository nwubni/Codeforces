#include <iostream>

using namespace std;

int main()
{
    int n{};
    string ans{};

    cin >> n;

    for (int i{1}; i <= n; i++)
    {
        if (i % 2)
            ans += "I hate ";
        else
            ans += "I love ";

        if (i + 1 > n)
            ans += "it";
        else
            ans += "that ";
    }

    cout << ans;

    return 0;
}