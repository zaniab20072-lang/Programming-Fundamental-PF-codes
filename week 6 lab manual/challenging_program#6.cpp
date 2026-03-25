#include <iostream>
using namespace std;

main()
{
    string username[3], password;
    bool login = false;

    string studentName[3];
    int studentAge[3];
    string courseName[3];

    int studentCount = 0, courseCount = 0;
    int choice;

    for (int i = 0; i < 3; i++)
    {
        cout << " Enter username: ";
        cin >> username[i];
        cout << " Enter password: ";
        cin >> password;

        if (username[i] == "admin" && password == "1234")
        {
            cout << " Login successfully " << endl;
            login = true;
            break;
        }
        else
        {  cout << " Wrong password " << endl; }
    }
    if (!login)
    {  cout << " Too many attempts. Program Ends " << endl;  }

    while (true)
    {
        cout << " \n---- University Management System ---- " << endl;
        cout << " 1. Add Student " << endl;
        cout << " 2. View Students " << endl;
        cout << " 3. Add Course " << endl;
        cout << " 4. View Courses " << endl;
        cout << " 5. Exit " << endl;
        cout << " Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout<<" Enter student count : ";
            cin>>studentCount;
            for( int i =0; i < studentCount ; i++ )
            {
                cout << " Enter Student Name: ";
                cin >> studentName[i];
                cout << " Enter Student Age: ";
                cin >> studentAge[i];
                cout << " Student Added Successfully " << endl;
            }
        }
        else if (choice == 2)
        {
            if (studentCount == 0)
            {  cout << " No Student Record Found <<endl";  }
            else
            {
                for (int i = 0; i < studentCount; i++)
                {
                    cout<<" Student " << i + 1 <<" : "<<studentName[i] <<endl;
                    cout<<" Age : " <<studentAge[i] <<endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout<<" Enter course count : ";
            cin>>courseCount;
            for( int i =0; i < courseCount ; i++)
            {
                cout<< " Enter Course Name: ";
                cin>>courseName[i];
                cout<<" Course Added Successfully " <<endl;
            }
        }
        else if (choice == 4)
        {
            if (courseCount == 0)
            {   cout<<" No Courses Available " << endl;  }
            else
            {
                for (int i = 0; i < courseCount; i++)
                {
                    cout<<" Course " << i + 1 << " : " << courseName[i] << endl;
                }
            }
        }
        else if (choice == 5)
        {  cout << " Program Exit " << endl;  break; }
        else
        {   cout << " Invalid Choice " << endl;  }
    }
}