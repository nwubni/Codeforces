#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t{}, s{};
    vector<int> arr{};

    cin >> t;

    while (t--)
    {
        for (int i{1}; i <= 4; i++)
        {
            cin >> s;
            arr.push_back(s);
        }

        int first = max(arr[0], arr[1]);
        int second = max(arr[2], arr[3]);

        if (first < second)
            swap(first, second);

        sort(arr.begin(), arr.end());

        if (arr[3] == first && arr[2] == second)
            cout << "YES\n";
        else
            cout << "NO\n";

        arr.clear();
    }

    return 0;
}