#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    string username{};
    unordered_set<char> unique{};

    cin >> username;

    for (char &c : username)
        unique.insert(c);

    cout << (unique.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}