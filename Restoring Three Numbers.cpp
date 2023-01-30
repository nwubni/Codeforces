#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int w{}, x{}, y{}, z{}, val{};
    vector<int> v{};

    for (int i{0}; i < 4; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    w = v[0];
    x = v[1];
    y = v[2];
    z = v[3];

    int b = (w - x + y) / 2;
    int a = w - b;
    int c = z - (a + b);

    cout << a << " " << b << " " << c;

    return 0;
}