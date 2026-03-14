#include<iostream>
using namespace std;

main()
{ 
    int choice;
    for( int i = 1; i <= 6; i++ )
    {
        cout<<" -------------Restaurant Management System----------------- "<<endl;
        cout<<" 1- Veiw Food Menu "<<endl;
        cout<<" 2- Place order "<<endl;
        cout<<" 3- Veiw order Status "<<endl;
        cout<<" 4- Generate bill "<<endl;
        cout<<" 5- Contact staff "<<endl;
        cout<<" 6- Exit "<<endl;

        cout<<" Enter choice (1-6): ";
        cin>>choice;

        if( choice == 1 )
        {
             cout<<" You Selected : View Food Menu "<<endl;
        }
        if( choice == 2 ) 
        { 
            cout<<" You Selected : Place order "<<endl; 
        }
        if( choice == 3 )
        {
             cout<<" You Selected : Veiw order status "<<endl; 
        }
        if( choice == 4 )
        {
             cout<<" You Selected : Generate bill "<<endl; 
        }
        if( choice == 5 )
        {
             cout<<" You Selected : Contact staff "<<endl; 
        }
        if( choice == 6 )
        { 
            cout<<" You Selected : Exit "<<endl; 
            break;
        }
        cout<<endl;
    }

}