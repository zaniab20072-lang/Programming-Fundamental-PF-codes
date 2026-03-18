#include <iostream>
using namespace std;

main()
{
    int num;
    cout << " Enter number of elements : ";
    cin >> num;
    int number[num];

    cout << " Enter " << num << " numbers : " << endl;

    for (int count = 0; count < num; count++)
    {
        cin >> number[count];
    }

    int largest = number[0];
    for (int i = 1; i < num; i++)
    {
        if (number[i] > number[0])
        {
            largest = number[i];
        }
    }
    cout << " The largest number : " << largest << endl;

    int smallest = number[0];
    for (int i = 1; i < num; i++)
    {
        if (number[i] < number[0])
        {
            smallest = number[i];
        }
    }
    cout << " The smallest number : " << smallest;
}
