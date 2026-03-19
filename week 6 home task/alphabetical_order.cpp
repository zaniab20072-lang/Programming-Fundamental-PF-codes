#include <iostream>
using namespace std;

main()
{
    int num;
    cout << " Enter number of students : ";
    cin >> num;
    string name[num];

    cout << " Enter the name of " << num << " students : " << endl;

    for (int i = 0; i < num; i++)
    {
        cin >> name[i];
    }
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (name[i] > name[j])
            {
                string name2 = name[i];
                name[i] = name[j];
                name[j] = name2;
            }
        }
    }
    cout << " Students in alphabetical order : " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << name[i] << endl;
    }
}