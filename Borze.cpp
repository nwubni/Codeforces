#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    char c{};
    string t{};
    unordered_map<string, char> mapping{{".", '0'}, {"-.", '1'}, {"--", '2'}};

    while (cin >> c)
    {
        t.push_back(c);

        if (mapping.count(t))
        {
            cout << mapping[t];
            t.clear();
        }
    }

    return 0;
}