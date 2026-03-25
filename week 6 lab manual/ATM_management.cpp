#include <iostream>
using namespace std;

main()
{
    int correct_pin = 1234;
    int pin[3];
    int choice, balance = 1000, amount;
    bool login = false;

    for (int i = 1; i <= 3; i++)
    {
        cout << " Enter ATM pin : ";
        cin >> pin[i];

        if (pin[i] == correct_pin)
        {
            login = true;
            cout << " Login successfully " << endl;
            break;
        }
        else
        {
            cout << " Wrong attempt " << endl;
        }
    }
        if (login == true)
        {
            while (true)
            {
                cout << " \n ----------ATM Menu----------- " << endl;
                cout << " 1- Chcek BALANCE " << endl;
                cout << " 2- Deposite Balance " << endl;
                cout << " 3- withdraw Balance " << endl;
                cout << " 4- Exit " << endl;

                cout << " Enter choice : ";
                cin >> choice;

                if (choice == 1)
                {
                    cout << " Curent Balance : " << balance <<endl;
                }
                else if (choice == 2)
                {
                    cout << " Enter amount to deposit : ";
                    cin >> amount;
                    balance = balance + amount;
                    cout << " updated balance " << balance << endl;
                }
                else if (choice == 3)
                {
                    cout << " Enter amount to withdraw : ";
                    cin >> amount;
                    if (amount <= balance && amount > 0)
                    {
                        balance = balance - amount;
                        cout << " Remaining balance " << balance << endl;
                    }
                    else
                    {
                        cout << " withdraw not possible " << endl;
                    }
                }
                else if (choice == 4)
                {
                    cout << " Thank you for using ATM " << endl;
                    break;
                }
                else
                {
                    cout << " invalid choice " << endl;
                }
            }
        }
        else
        {
            cout << " too many incorrect atempts, offer denied ";
        }
}