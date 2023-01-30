#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n{}, total{0};
    string s{};
    vector<int> a{0};

    for (int i{1}; i <= 4; i++)
    {
        cin >> n;
        a.push_back(n);
    }

    cin >> s;

    for (char &c : s)
        total += a[c - '0'];

    cout << total;

    return 0;
}