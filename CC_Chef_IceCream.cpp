// Chef and icecream
#include <iostream>
using namespace std;

int main()
{
    int cases;
    int prices_cases;
    int chef_bank = 0;
    int amount1;
    int amount2;
    int icecream = 5;
    cout << "Enter no. of cases : \n";
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cout << "Enter no. of cases for prices: \n";
        cin >> prices_cases;
        cout << "Enter prices\n";
        cin >> amount1 >> amount2;
        for (int j = 0; j < prices_cases; j++)
        {
            chef_bank = abs(icecream - amount1) + 5;
        }
        if (amount1 == 5)
        {
            cout << "No" << endl;
        }
        else if (amount2 - icecream == chef_bank)
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}