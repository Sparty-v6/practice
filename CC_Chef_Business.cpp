#include <iostream>
using namespace std;

int main()
{
    int five = 0, ten = 0, fifteen = 0, yes = 0, cus, customers;

    cin >> cus; // The first line of each test case contains a single integer N.

    for (int i = 0; i < cus; i++)
    {
        cin>>customers;
        for(int j=0; j<customers; j++)
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
                cout << "NO"<<endl;
                break;
            }
            else if (i > 0)
            {
                if (i == 1)
                {
                    yes++;
                }
                if (((5 == rs - 5) && (five != 0)) || ((10 == rs - 5) && (ten != 0)) || ((15 == rs - 5) && (fifteen != 0)) || (rs - 5 == 0))
                {
                    yes++;
                    if (yes == cus)
                    {
                        cout << "YES"<<endl;
                        break;
                    }
                }
                else
                {
                    cout << "NO"<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}