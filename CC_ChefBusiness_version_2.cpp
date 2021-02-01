#include <iostream>
using namespace std;

int main()
{
    int t_case;
    cin >> t_case;
    for (int gg = 0; gg < t_case; gg++)
    {
        int five = 0, ten = 0, fifteen = 0, yes = 0, cus;
        cin >> cus; // The first line of each test case contains a single integer N.

        for (int i = 0; i < cus; i++)
        {
            int rs;
            cin >> rs;
            if (rs == 5)
                five++;
            else if (rs == 10)
                ten++;
            else if (rs == 15)
                fifteen++;

            if (i == 0 && rs != 5)
            {
                cout << "NO\n";
                break;
            }
            else if (i > 0)
            {
                if (i == 1)
                {
                    yes++;
                }
                if ((5 == rs - 5) && (five != 0))
                {
                    yes++;
                    five--;
                }
                else if ((10 == rs - 5) && (ten != 0))
                {
                    yes++;
                    ten--;
                }
                else if ((15 == rs - 5) && (fifteen != 0))
                {
                    yes++;
                    fifteen--;
                }
                else if (rs - 5 == 0)
                {
                    yes++;
                }
                else
                {
                    cout << "NO\n";
                    break;
                }
                if (yes == cus)
                {
                    cout << "YES\n";
                    break;
                }
            }
        }
    }

    return 0;
}