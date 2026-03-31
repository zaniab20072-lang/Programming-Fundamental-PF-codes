#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int total_students = 1000; // total size
    int index = 7;

    // data stuctures
    string name_array[total_students] = {"ali", "amar", "ahmed", "bilal", "usman", "hassan", "zain"};
    int age_array[total_students] = {19, 20, 18, 21, 20, 19, 22};
    float matric_array[total_students] = {1050, 890, 1020, 970, 1100, 980, 1010};
    float inter_array[total_students] = {980, 850, 990, 920, 1000, 960, 970};
    float ecat_array[total_students] = {350, 280, 320, 300, 360, 330, 310};
    string pref1_array[total_students] = {"CS", "CE", "SE", "CS", "EE", "SE", "CS"};
    string pref2_array[total_students] = {"CE", "EE", "CS", "EE", "CS", "CE", "SE"};
    string pref3_array[total_students] = {"EE", "CS", "EE", "SE", "CE", "CS", "EE"};
    float aggre_array[total_students];

    // CRUD create, read, update, delete
    while (true)
    {
        // main header od ums
        system(" cls ");
        cout << " ------------------------------------------------------- " << endl;
        cout << " -------- University Admission Mangement Syestem ------- " << endl;
        cout << " ------------------------------------------------------- " << endl;

        cout << " User Menu " << endl;
        cout << " 1- Admin " << endl;
        cout << " 2- Student " << endl;
        cout << " 3- To Exit " << endl;
        cout << " Choose option : ";
        string user_option;
        cin >> user_option;

        cout << " You Choose : " << user_option << endl;
        if (user_option == "1")
        {
            // write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " Admin menu . Login attempt " << i + 1 << endl;
                cout << " Enter username : " << endl;
                string user_name;
                cin >> user_name;
                cout << " Enter password : " << endl;
                string password;
                cin >> password;
                if (user_name == "admin" && password == "123")
                {
                    cout << " Successfully login " << endl;

                    while (true)
                    {
                        system("cls");
                        cout << " 1- Show all students " << endl;
                        cout << " 2- Search student " << endl;
                        cout << " 3- Update student record " << endl;
                        cout << " 4- Generate merit list " << endl;
                        cout << " 5- Delete record by name " << endl;
                        cout << " 6- Logout " << endl;
                        cout << " Choose option : ";
                        string admin_option;
                        cin >> admin_option;

                        if (admin_option == "1")
                        {
                            // show students record
                            cout << " Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3 " << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] != "")
                                {
                                    cout << name_array[i] << " \t " << age_array[i] << " \t " << matric_array[i] << " \t "
                                         << inter_array[i] << " \t " << ecat_array[i] << " \t " << pref1_array[i] << " \t "
                                         << pref2_array[i] << " \t " << pref3_array[i] << endl;
                                }
                            }
                        }
                        else if (admin_option == "2")
                        {
                            // find student by name
                            cout << " Enter the name you want to search : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << " REcord not found against name : " << name << endl;
                            }
                            else
                            {
                                cout << " Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3 " << endl;
                                cout << name_array[found_index] << " \t " << age_array[found_index] << " \t " << matric_array[found_index] << " \t "
                                     << inter_array[found_index] << " \t " << ecat_array[found_index] << " \t " << pref1_array[found_index] << " \t "
                                     << pref2_array[found_index] << " \t " << pref3_array[found_index] << endl;
                            }
                        }
                        else if (admin_option == "3")
                        {
                            // update student record
                            cout << " Enter the name you want to update record of : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << " -------- Old Record -------- " << endl;
                                cout << " Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3 " << endl;
                                cout << name_array[found - index] << " \t " << age_array[found_index] << " \t " << matric_array[found_index] << " \t "
                                     << inter_array[found_index] << " \t " << ecat_array[found_index] << " \t " << pref1_array[found_index] << " \t "
                                     << pref2_array[found_index] << " \t " << pref3_array[found_index] << endl;

                                cout << " Enter New Record " << endl;
                                cout << " Enter your name: ";
                                string name;
                                cin >> name;
                                cout << " Enter age : ";
                                int age;
                                cin >> age;
                                cout << " Enter your matric marks : ";
                                float matric;
                                cin >> matric;
                                cout << " Enter your inter marks : ";
                                float fsc;
                                cin >> fsc;
                                cout << " Enter your ecat marks : ";
                                float ecat;
                                cin >> ecat;

                                cout << " Enter CS, CE, EE as your prefrences " << endl;
                                cout << " Enter 1st pref : ";
                                string pref1;
                                cin >> pref1;
                                cout << " Enter 2nd pref : ";
                                string pref2;
                                cin >> pref2;
                                cout << " Enter 3rd pref : ";
                                string pref3;
                                cin >> pref3;

                                name_array[found_index] = name;
                                age_array[found_index] = age;
                                matric_array[found_index] = matric;
                                inter_array[found_index] = fsc;
                                pref1_array[found_index] = pref1;
                                pref2_array[found_index] = pref2;
                                pref3_array[found_index] = pref3;
                            }
                            else
                            {
                                cout << " Record not found " << endl;
                            }
                        }
                        else if (admin_option == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggre = matric_array[i] / 1100.0 * 100.0 * 0.30 + inter_array[i] / 1200.0 * 100.0 * 0.4 +
                                              ecat_array[i] / 400.0 * 100.0 * 0.3;
                                aggre_array[i] = aggre;
                            }

                            // sorting data on the basis of Aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i+1; j < index; j++)
                                {
                                    if (aggre_array[i] < aggre_array[j])
                                    {
                                        // swapping of name
                                        string temp_name = name_array[i];
                                        name_array[i] = name_array[j];
                                        name_array[j] = temp_name;

                                        // swapping of age
                                        int temp_age = age_array[i];
                                        age_array[i] = age_array[j];
                                        age_array[j] = temp_age;

                                        // swapping of matric
                                        float temp_matric = matric_array[i];
                                        matric_array[i] = matric_array[j];
                                        matric_array[j] = temp_matric;

                                        // swapping of inter
                                        float temp_inter = inter_array[i];
                                        inter_array[i] = inter_array[j];
                                        inter_array[j] = temp_inter;

                                        // swapping of ecat
                                        float temp_ecat = ecat_array[i];
                                        ecat_array[i] = ecat_array[j];
                                        ecat_array[j] = temp_ecat;

                                        // swapping of pref1
                                        string temp_pref1 = pref1_array[i];
                                        pref1_array[i] = pref1_array[j];
                                        pref1_array[j] = temp_pref1;

                                        // swapping of pref2
                                        string temp_pref2 = pref2_array[i];
                                        pref2_array[i] = pref2_array[j];
                                        pref2_array[j] = temp_pref2;

                                        // swapping of pref3
                                        string temp_pref3 = pref3_array[i];
                                        pref3_array[i] = pref3_array[j];
                                        pref3_array[j] = temp_pref3;

                                        // swapping of aggregate
                                        float temp_agg = aggre_array[i];
                                        aggre_array[i] = aggre_array[j];
                                        aggre_array[j] = temp_agg;
                                    }
                                }
                            }

                            // code to display all data with aggregate
                            cout << " Name\tAge\tAggregate " << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] != "")
                                {
                                    cout << name_array[i] << " \t " << age_array[i] << " \t " << aggre_array[i] << endl;
                                }
                            }

                            // admit students to disciples
                        }
                        else if (admin_option == "5")
                        {
                            // delete student record
                            cout << " Enter the name you want to delete record of : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                name_array[found_index] = "";
                                age_array[found_index] = 0;
                                matric_array[found_index] = 0;
                                inter_array[found_index] = 0;
                                pref1_array[found_index] = "";
                                pref2_array[found_index] = "";
                                pref3_array[found_index] = "";
                                cout << " REcord of " << name << " Deleted " << endl;
                            }
                            else
                            {
                                cout << " Record not found " << endl;
                            }
                        }
                        else if (admin_option == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << " You selected wrong option " << endl;
                        }
                        cout << " Press any key to continue... " << endl;
                        getch();
                    }
                    cout << " Press any key to continue... " << endl;
                    getch();
                }
                else
                {
                    cout << " username or password is invalid " << endl;
                }
                cout << " Press any key to continue ... " << endl;

                getch();
            }
        }
        else if (user_option == "2")
        {
            // write here the student code
            system("cls");
            cout << " Welcome to UMS Student Menu " << endl;
            cout << " Enter your name: ";
            string name;
            cin >> name;
            cout << " Enter age : ";
            int age;
            cin >> age;
            cout << " Enter your matric marks : ";
            float matric;
            cin >> matric;
            cout << " Enter your inter marks : ";
            float fsc;
            cin >> fsc;
            cout << " Enter your ecat marks : ";
            float ecat;
            cin >> ecat;

            cout << " Enter CS, CE, EE as your prefrences " << endl;
            cout << " Enter 1st pref : ";
            string pref1;
            cin >> pref1;
            cout << " Enter 2nd pref : ";
            string pref2;
            cin >> pref2;
            cout << " Enter 3rd pref : ";
            string pref3;
            cin >> pref3;

            name_array[index] = name;
            age_array[index] = age;
            matric_array[index] = matric;
            inter_array[index] = fsc;
            pref1_array[index] = pref1;
            pref2_array[index] = pref2;
            pref3_array[index] = pref3;
            index = index + 1;

            cout << " Your data has been saved " << endl;
            cout << " Press any key to continue ... " << endl;

            getch();
        }
        else if (user_option == "3")
        {
            break;
        }
        else
        {
            cout << " You entered wrong option " << endl;
        }
    } // end of our main while loop

    cout << endl
         << " Thanks for using this software " << endl;
}