#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "How many numbers you want to enter : ";
    cin >> n;

    int arr[n];
    int count = 0;
    cout << " Enter " << n << " numbers per line : " << endl;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        bool alreadyEntered = false;

        for (int j = 0; j < count; j++)
        {
            if (arr[j] == num)
            {
                alreadyEntered = true;
                break;
            }
        }
        if (alreadyEntered)
        {
            cout << " Already Entered : " << num <<endl;
        }
        else
        {
            arr[count] = num;
            count++;
        }
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}