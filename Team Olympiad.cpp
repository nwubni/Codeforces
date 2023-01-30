#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n{}, t{}, w{};
    int programming{0}, maths{0}, pe{0};
    int pos{1};
    vector<int> t1{};
    vector<int> t2{};
    vector<int> t3{};

    cin >> n;

    while (n--)
    {
        cin >> t;

        if (t == 1)
        {
            t1.push_back(pos);
            programming++;
        }
        else if (t == 2)
        {
            t2.push_back(pos);
            maths++;
        }
        else
        {
            t3.push_back(pos);
            pe++;
        }

        pos++;
    }

    while (programming > 0 && maths > 0 && pe > 0)
    {
        programming--;
        maths--;
        pe--;

        w += (programming >= 0 && maths >= 0 && pe >= 0);
    }

    cout << w << '\n';

    while (w-- > 0)
    {
        cout << t1.back() << " " << t2.back() << " " << t3.back() << '\n';

        t1.pop_back();
        t2.pop_back();
        t3.pop_back();
    }

    return 0;
}