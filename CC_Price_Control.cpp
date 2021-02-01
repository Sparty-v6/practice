// Chef and price control
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test_cases;
    int *array;
    int sum = 0;
    int new_sum = 0;
    int revenue;
    // int subtract = 0;
    int items = 0;
    float ceiling_price;

    // cout << "Enter no. of test cases\n";
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        // cout << "\nEnter test cases for no. of items: \n";
        cin >> items >> ceiling_price;

        // cout << "Enter ceiling price\n";
        // cin >> ceiling_price;

        array = new int[items];
        // cout << "\nEnter prices for items:\n";
        for (int j = 0; j < items; j++)
        {
            cin >> array[j];
        }
        // cout<<"Here are ur prices summing em: \n";
        for (int k = 0; k < items; k++)
        {
            // cout<<array[k]<<' ';
            sum += array[k];
        }
        // cout << "\nInitial sum: ";
        // cout << sum << endl;
        sort(array, array + items);
        binary_search(array, array + items, ceiling_price);

        for (int l = 0; l < items; l++)
        {
            if (array[l] >= ceiling_price)
            {
                array[l] = ceiling_price;
            }
        }
        // for (int r = 0; r < items; r++)
        // {
        //     cout << array[r] << " ";
        // }
        // cout<<"\nFinal sum \n";
        for (int k = 0; k < items; k++)
        {
            // cout<<array[k]<<' ';
            new_sum += array[k];
        }
        // cout << new_sum << endl;

        revenue = sum - new_sum;

        // cout << "Savings " << revenue << endl;
        cout << revenue << endl;

        sum = 0;
        new_sum = 0;
    }
    return 0;
}