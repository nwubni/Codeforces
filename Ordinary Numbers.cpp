#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int t{}, n{}, counter{};
    long long int front{};

    cin >> t;

    while (t--)
    {
        cin >> n;

        counter = 0;
        queue<long long> q{};

        for (int i{1}; i <= 9; i++)
            q.push(i);

        while (!q.empty())
        {
            front = q.front();
            q.pop();

            if (front > n)
                break;

            front = (front * 10) + (front % 10);

            if (front <= n)
                q.push(front);

            counter++;
        }

        cout << counter << '\n';
    }

    return 0;
}