#include<iostream>
using namespace std;

main()
{ 
    int choice;
    string name;
    for( int i = 1; i <= 5; i++ )
    {
        cout<<" -------------Library System----------------- "<<endl;
        cout<<" 1- Add book "<<endl;
        cout<<" 2- Veiw book "<<endl;
        cout<<" 3- Borrow book "<<endl;
        cout<<" 4- Issue book "<<endl;
        cout<<" 5- Exit "<<endl;

        cout<<" Enter choice (1-6): ";
        cin>>choice;

        if( choice == 1 )
        {
            cout<<" Enter book name : ";
            cin>>name;
             cout<<" You added a book "<<name <<endl;
        }
        if( choice == 2 ) 
        { 
            cout<<" Enter book name : ";
            cin>>name;
            cout<<" You view a book "<<name <<endl; 
        }
        if( choice == 3 )
        {
            cout<<" Enter book name : ";
            cin>>name;
             cout<<" You borrow a book "<<name <<endl; 
        }
        if( choice == 4 )
        {
            cout<<" Enter book name : ";
            cin>>name;
             cout<<" You issue book "<<name <<endl; 
        }
        if( choice == 6 )
        { 
            cout<<" Exiting Library System. GOODBYE! "<<endl; 
            break;
        }
        cout<<endl;
    }

}