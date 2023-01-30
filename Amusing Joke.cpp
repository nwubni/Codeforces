#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    bool ans{true};
    string guest{}, host{}, pile{};
    unordered_map<char, int> freq{};

    cin >> guest >> host >> pile;

    int extra = pile.length();

    for (char &c : pile)
        freq[c]++;

    for (char &c : guest)
    {
        if (freq[c] == 0)
        {
            ans = false;
            break;
        }

        freq[c]--;
        extra--;
    }

    for (char &c : host)
    {
        if (!ans || freq[c] == 0)
        {
            ans = false;
            break;
        }

        freq[c]--;
        extra--;
    }

    if (ans && extra == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}