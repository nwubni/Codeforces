#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t{}, n{};
    vector<int> vec{};

    cin >> t;

    while (t--)
    {
        int max_val{0};

        for (int i{1}; i <= 3; i++)
        {
            cin >> n;
            max_val = max(max_val, n);
            vec.push_back(n);
        }

        cin >> n;

        for (int &val : vec)
            n -= max_val - val;

        if (n >= 0 && n % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";

        vec.clear();
    }

    return 0;
}