#include <iostream>
using namespace std;

main()
{
    string product_name[4] = {"apple", "banana", "orange", "mango"};
    float prices[4] = {0.5, 0.3, 0.8, 1.2};
    int quantity[4] = {50, 100, 30, 20};

    int num;
    cout << " Enter the number of products : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << " Enter name of " << i+1 << " product : ";
        cin >> product_name[i];
        cout << " Enter the price of " << product_name[i] << " : $" ;
        cin>>prices[i]; 
        cout << " Enter quantity of " << product_name[i] << " : " ; 
        cin>>quantity[i];
        cout << endl;
    }

     float total[num];

    cout << "     Product inventory report     " << endl;
    cout << "----------------------------------" << endl;
    
    for (int i = 0; i < num; i++)
    {
        total[i] = prices[i] * quantity[i] ;
        cout << product_name[i] << " : $" << prices[i] << ", " << quantity[i] << " in stock, ";
        cout << " Total value : $" << total[i] << endl;
    }
}