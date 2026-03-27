#include <iostream>
using namespace std;

main()
{
    int n1 ;
    cout << " Enter the number of elements : " ;
    cin>>n1;

    cout << " Enter " << n1 << " elements for 1st array, one per line : " << endl;
    string word[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> word[i];
    }

    for (int i = 0; i < n1; i++)
    {
        int j = 0;
        while (word[i][j] != '\0')
        {
            j++;
        }
        if (word[i][j - 1] != '7')
        {
            word[i] = word[i] + "7";
        }
    }

    cout << " Resulting array : [ ";
    for (int i = 0; i < n1; i++)
    {
        cout << word[i] << " , ";
    }
    cout << " ] ";
}