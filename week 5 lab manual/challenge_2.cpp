#include<iostream>
using namespace std;

main()
{  
    string name, password;
    string studentName = "";
    int studentAge = 0;
    string courseName = "";
    int choice;

    for( int i=1; i<=3; i++ )
    {
      cout<<" Enter username : ";
      cin>>name;
      cout<<" Enter password : ";
      cin>>password;
      if( name == "admin" && password == "1234" )
      {
        cout<<" Login successfully "<<endl;
        break;
      }
      else
      {
        cout<<" Wrong pasword "<<endl;
      }
      if( i == 3 && ! ( name == " admin " && password == "1234" ) )
      {
        cout<<" Too many attempts . Program Ends "<<endl;
      }
    }
    cout<<endl;
    for(int i = 1; i <= 5; i++)
   {
      cout<<" ---- University Management System ---- "<<endl;
      cout<<" 1. Add Student "<<endl;
      cout<<" 2. View Student&quot "<<endl;
      cout<<" 3. Add Course "<<endl;
      cout<<" 4. Exit "<<endl;
      cout<<" Enter Choice : ";
      cin>>choice;
      if(choice == 1)
      {
        cout<<" Enter Student Name : ";
        cin>>studentName;
        cout<<" Enter Student Age : ";
        cin>>studentAge;
        cout<<" Student Added Successfully "<<endl<<endl;
      }
      else if(choice == 2)
      {

       if(studentName != "" )
         {
           cout<<" Student Name : " <<studentName <<endl;
           cout<<" Student Age : " <<studentAge <<endl;
         }
      else
        {
           cout<<" No Student Record Found "<<endl;
        }
        cout<<endl;
      }
     else if(choice == 3)
     {
        cout<<" Enter Course Name : ";
        cin>>courseName;
        cout<<" Course Added : " <<courseName <<endl<<endl;
     }
     else if(choice == 4)
     {
        cout<<" Program Exit "<<endl;
       break;
     }
      else
       {
          cout<<" Invalid Choice "<<endl;
        }
    }
}