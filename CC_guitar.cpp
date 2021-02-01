// #include <iostream>
// using namespace std;

// int difference(int a,int b){
//     a--;
//     b--;
//     int c = a-b;
//     return c;
// }

// int main()
// {

//     int a, b;
//     cin>>a>>b;
//     cout<<difference(a,b);
//     // int testCases;
//     // int array[] = {};
//     // cout << "Test cases? \n";
//     // cin >> testCases;
//     // for (int i = 0; i < testCases; i++){
//     //     int guitarStrings;
//     //     cout<<"Total strings are ? \n";
//     //     cin>>guitarStrings;
//     //     for(int j=0; j < guitarStrings; j++){

//     //     }
//     // }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int strings;
    cin >> strings;
    int a, b, c = 0;
    for (int i = 0; i < strings - 1; i++)
    {
        cin >> a;
        if (i < strings - 2)
            cin >> b;
        if (b > a)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        a++;
        c += b - a;
        b = a;
    }
    cout << c;

    // int count = 0;
    // int end,start;
    // cin>>start;
    // cin >> end;
    // for (int i = start; i < (end-1); i++)
    // {
    //     count++;
    // }
    // cout<<count;

    return 0;
}