#include <iostream>
using namespace std;

main()
{
    int num[4];
    string coins[4] = {"quarters", "dimes", "nickels", "pennies"};
    for (int i = 0; i < 4; i++)
    {
        cout << " Enter " << coins[i] << " : ";
        cin >> num[i];
    }
    float due;
    cout << " Enter the total amount due : $";
    cin >> due;

    float total = 0;
    total = ((num[0] * 0.25) + (num[1] * 0.10) + (num[2] * 0.05) + (num[3] * 0.01));

    cout << " Can you pay the amount ? ";

    if (total >= due)
    {
        cout << " yes ";
    }
    else
    {
        cout << " no ";
    }
}