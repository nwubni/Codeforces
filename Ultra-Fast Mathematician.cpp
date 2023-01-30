#include <iostream>

using namespace std;

int main()
{
    string a{}, b{}, c{};

    cin >> a >> b;

    for (int i{0}; i < a.length(); i++)
        c.push_back((a[i] != b[i]) + '0');

    cout << c;

    return 0;
}