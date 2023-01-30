#include <iostream>

using namespace std;

int main()
{
    int contest_time{240}, n{}, k{}, i{1}, count{0};

    cin >> n >> k;

    contest_time -= k;

    while (contest_time > 0 && count < n)
    {
        contest_time -= 5 * i;
        count += contest_time >= 0;
        i++;
    }

    cout << count;

    return 0;
}