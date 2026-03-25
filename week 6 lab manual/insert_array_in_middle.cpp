#include <iostream>
using namespace std;

main()
{
    int n1 = 2;
    cout << " Enter the number of elements for 1st array ( must be 2 ) : " << n1 << endl;

    cout << " Enter " << n1 << " elements for 1st array, one per line : " << endl;
    int num1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> num1[i];
    }

    int n2;
    cout << " Enter the number of elements for 1st array : ";
    cin >> n2;

    cout << " Enter " << n2 << " elements for 1st array, one per line : " << endl;
    int num2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> num2[i];
    }

    int res[n1 + n2];
    res[0] = num1[0];

    for (int i = 0; i < n2; i++)
    {
        res[i + 1] = num2[i];
    }

    res[n2 + 1] = num1[1];

    cout << " Resulting array : [ ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << res[i] << " , ";
    }
    cout << " ] ";
}