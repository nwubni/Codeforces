#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s{};

    cin >> s;

    sort(s.begin(), s.end());

    string ans{};

    for (char &c : s)
        if (c != '+')
            ans.push_back(c), ans.push_back('+');

    ans.pop_back();

    cout << ans;

    return 0;
}