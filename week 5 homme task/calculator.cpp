#include<iostream>
using namespace std;

main()
{ 
    int choice, n1, n2;
    int add, sub, mul;
    float div;
    for( int i = 1; i <= 5; i++ )
    {
        cout<<" -------------Simple Calculator----------------- "<<endl;
        cout<<" 1- Add "<<endl;
        cout<<" 2- Subtract "<<endl;
        cout<<" 3- Multiply "<<endl;
        cout<<" 4- Divide "<<endl;
        cout<<" 5- Clear screen "<<endl;
        cout<<" 6- Exit "<<endl;

        cout<<" Enter choice (1-6): ";
        cin>>choice;

        if( choice == 1 )
        {
            cout<<" Enter a number : ";
            cin>>n1;
            cout<<" Enter second number : ";
            cin>>n2;
             add = n1 + n2 ;
             cout<<" ADDITION : "<<add <<endl;
        }
        if( choice == 2 ) 
        { 
            cout<<" Enter a number : ";
            cin>>n1;
            cout<<" Enter second number : ";
            cin>>n2;
            sub = n1 - n2;
            cout<<" SUBTRACTION : "<<sub <<endl; 
        }
        if( choice == 3 )
        {
            cout<<" Enter a number : ";
            cin>>n1;
            cout<<" Enter second number : ";
            cin>>n2;
            mul = n1 * n2;
             cout<<" MULTIPLICATION : "<<mul <<endl; 
        }
        if( choice == 4 )
        {

            cout<<" Enter a number : ";
            cin>>n1;
            cout<<" Enter second number : ";
            cin>>n2;
            div = n1 / n2 ;
             cout<<" DIVISION : "<<div <<endl; 
        }
        if( choice == 5 )
        {
            system( " cls " );
            cout<<" clear screen "<<endl;
        }
        if( choice == 6 )
        { 
            cout<<" You Selected : Exit "<<endl; 
            break;
        }
        cout<<endl;
    }

}