#include <iostream>
using namespace std;

int str_pair(string str)
{
    int pairs = 0;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'x' && str[i + 1] == 'y' || str[i] == 'y' && str[i + 1] == 'x')
        {
            pairs++;
        }
        if(pairs%2==0)
        {
            pairs/=2;
        }
        else
        {
            pairs=(pairs/2)+1;
        }
    }
    return pairs;
}

int main()
{
    int Test_cases;
    cin >> Test_cases;
    string str;
    while (Test_cases--)
    {
        cin >> str;
        cout << str_pair(str) << endl;
    }
    return 0;
}