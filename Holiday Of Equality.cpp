#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n{}, a{}, welfare{}, max_welfare{0}, s{0};
    vector<int> v{};

    cin >> n;

    while (n--)
    {
        cin >> welfare;

        v.push_back(welfare);
        max_welfare = max(max_welfare, welfare);
    }

    for (int &value : v)
        s += max_welfare - value;

    cout << s;

    return 0;
}