#include<iostream>
using namespace std;

main()
{
    int pin;
    int choice, deposit, withdraw, currentBalance, check=0;

    for( int i=1; i<=3; i++ )
    {
       cout<<" Enter ATM pin : ";
       cin>>pin;
 
       if( pin == 1234 )
       {   cout<<" Login successfully "<<endl; break; }
       else
       {  cout<<" Wrong attempt "<<endl;  }

       if( i == 3 && ! ( pin == 1234 ) )
       {  cout<<" Too much wrong attempts ";
        break;  }
       cout<<endl;
    }
   
    for( int i=1; i<=5; i++ )
    {
        cout<<" ----------ATM Menu----------- "<<endl;
        cout<<" 1- Chcek BALANCE "<<endl;
        cout<<" 2- Deposite Balance "<<endl;
        cout<<" 3- withdraw Balance "<<endl;
        cout<<" 4- Exit "<<endl;

        cout<<" Enter choice : ";
        cin>>choice;

        if( choice == 1)
        { 
            if( check == 0 )
            {
              cout<<" Current Balance : ";
              cin>>currentBalance;
              check = 1;
            }
            else
            { 
                cout<<" Curent Balance : " << currentBalance;
            }  
        }
         cout<<endl;
        if( choice == 2 )
        {
            cout<<" Enter amount to deposit : ";
            cin>>deposit;
            cout<<" money deposited successfully ";
            currentBalance = currentBalance + deposit ;
        }    
         cout<<endl;
        if( choice == 3 )
        {
            cout<<" Enter amount to withdraw : ";
            cin>>withdraw;
            if( withdraw <= currentBalance )
            {
              currentBalance = currentBalance - withdraw ;
            }
            else
            {
                cout<<" withdraw not possible ";
            }
        }    
         cout<<endl;
        if( choice == 4 )
        {
            cout<<" Thank you for using ATM "<<endl;
            break;
        }
    }
}