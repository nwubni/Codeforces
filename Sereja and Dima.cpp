#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n{}, v{};
    vector<int> cards{};

    cin >> n;

    while (n--)
    {
        cin >> v;

        cards.push_back(v);
    }

    int left{0}, right = cards.size() - 1;
    int sereja{0}, dima{0}, biggest{};
    bool alt{true};

    while (left <= right)
    {
        if (cards[left] > cards[right])
            biggest = cards[left++];
        else
            biggest = cards[right--];

        if (alt)
            sereja += biggest;
        else
            dima += biggest;

        alt = !alt;
    }

    cout << sereja << " " << dima;

    return 0;
}