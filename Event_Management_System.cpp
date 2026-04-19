#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int total_events = 1000; // total size
    int index = 8;

    // data structures

    string EventName_Array[total_events] = {"Music Concert", "Comedy Show", "Food Festival", "Art Exhibition",
                                            "Fashion Show", "Movie Premiere", "Cultural Night", "Business Conference"};
    string EventDates_Array[total_events] = {"20-Apr-2026", "22-Apr-2026", "25-Apr-2026", "28-Apr-2026", "30-Apr-2026",
                                             "03-May-2026", "06-May-2026", "08-May-2026"};
    string EventID_Array[13] = {"E101", "E102", "E103", "E104", "E105", "E106", "E107", "E108"};
    int TicketPrice_Array[total_events] = {2500, 1500, 1000, 3000, 1200, 3500, 2800, 800};
    int TotalSeats_Array[total_events] = {100, 80, 120, 60, 70, 150, 90, 200};
    int RemainingSeats_Array[total_events] = {72, 54, 95, 38, 49, 110, 61, 170};

    string CustomerName_Array[total_events];
    string BookingEvent_Array[total_events];
    int BookingSeats_Array[total_events]; // these are for displaying customer and booking records to event organizer
    int BookingBill_Array[total_events];
    int booking_index = 0;

    string customer_name, event_name;             // for customers when they want to book and generate tickets
    int seats, cancel_seats = 0, total_price = 0; // for customers when they want to book and generate tickets
    int booked, revenue;                          // for event organizer for displaying report

    string FreeThings_Array[total_events] = {"Free Parking + Welcome Drink + VIP Badge", "Free Snacks + Soft Drink + Photo Booth", "Free Tasting Coupon + Water Bottle + Gift Card",
                                             "Art Brochure + Free Coffee + Souvenir", "Welcome Drink + Free Makeup Sample + Parking", "Popcorn + Soft Drink + Poster",
                                             "Dinner + Tea + Reserved Seating", "Conference Kit + Lunch + Free WiFi"};

    // CURD create, read, update, delete
    while (true)
    {
        // main header
        system("cls");
        cout << "---------------------------------------------------------------------" << endl;
        cout << "--------------------- Event Management System -----------------------" << endl;
        cout << "---------------------------------------------------------------------" << endl
             << endl;

        cout << "  Mai Menu : " << endl;
        cout << " 1- Event Organizer " << endl;
        cout << " 2- Customer " << endl;
        cout << " 3- To Exit " << endl;

        cout << " Choose option " << endl;
        string user_option;
        cin >> user_option;
        cout << " You Choose : " << user_option << endl;

        if (user_option == "1")
        {
            // Here is the Event Organizer Code and I'm also using word Admin for it
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " login Attempt for Menu of Event Organizer " << i + 1 << endl;
                cout << " Enter username : ";
                string user_name;
                cin >> user_name;
                cout << " Enter Password : ";
                string password;
                cin >> password;
                if (user_name == "Admin" && password == "2429")
                {
                    cout << " login successfully " << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "******************************************" << endl;
                        cout << " Menu For Event Oraganizer " << endl;
                        cout << " 1- Show All Events " << endl;
                        cout << " 2- Search Event " << endl;
                        cout << " 3- Add Event " << endl;
                        cout << " 4- Delete Event " << endl;
                        cout << " 5- Update Record of Event " << endl;
                        cout << " 6- Report of Events " << endl;
                        cout << " 7- Veiw Customers " << endl;
                        cout << " 8- View Bookings " << endl;
                        cout << " 9- Sort Events By Highest Price " << endl;
                        cout << " 10- Logout " << endl;
                        cout << "******************************************" << endl;
                        cout << " Choose option : " << endl;
                        string admin_option;
                        cin >> admin_option;

                        if (admin_option == "1")
                        {
                            // code for, show all events record
                            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "Event_ID\t Event_Name\t\t Event_Date\t Total_seats\t Ticket_Price\t  REmaining_Seats\t Free_Facilities ";
                            cout << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (EventName_Array[i] != "")
                                {
                                    cout << EventID_Array[i] << "\t\t " << EventName_Array[i] << "\t\t " << EventDates_Array[i] << "\t\t "
                                         << TotalSeats_Array[i] << "\t\t " << TicketPrice_Array[i] << "\t\t " << RemainingSeats_Array[i]
                                         << "\t\t " << FreeThings_Array[i] << endl;
                                }
                            }
                            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                        }
                        else if (admin_option == "2")
                        {
                            // code for search Event by name
                            cout << " Enter Event name you want to search : ";
                            string name;
                            cin.ignore();
                            getline(cin, name);
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (EventName_Array[i] == name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << " Record not found " << endl;
                            }
                            else
                            {
                                cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                                cout << "Event_ID\t Event_Name\t\t Event_Date\t Total_seats\t Ticket_Price\t  REmaining_Seats\t Free_Facilities " << endl;
                                cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                                cout << EventID_Array[found_index] << "\t\t " << EventName_Array[found_index] << "\t\t " << EventDates_Array[found_index] << "\t\t "
                                     << TotalSeats_Array[found_index] << "\t\t " << TicketPrice_Array[found_index] << "\t\t " << RemainingSeats_Array[found_index]
                                     << "\t\t " << FreeThings_Array[found_index] << endl;
                                cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            }
                        }
                        else if (admin_option == "3")
                        {
                            // code for Add Event
                            cout << " The Old Record " << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "Event_ID\t Event_Name\t\t Event_Date\t Total_seats\t Ticket_Price\t  REmaining_Seats\t Free_Facilities " << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                cout << EventID_Array[i] << "\t\t " << EventName_Array[i] << "\t\t " << EventDates_Array[i] << "\t\t "
                                     << TotalSeats_Array[i] << "\t\t " << TicketPrice_Array[i] << "\t\t " << RemainingSeats_Array[i]
                                     << "\t\t " << FreeThings_Array[i] << endl;
                            }
                            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << endl;
                            cout << " Adding new Event " << endl;
                            for (int i = index; i < index + 1; i++)
                            {
                                index++;
                                if (EventName_Array[i] == "")
                                {
                                    cout << " Enter New Event Name : ";
                                    cin.ignore();
                                    getline(cin, EventName_Array[i]);
                                    cout << " Enter date for this new event : ";
                                    getline(cin, EventDates_Array[i]);
                                    cout << " Enter total number of seats for it : ";
                                    cin >> TotalSeats_Array[i];
                                    cout << " Enter Ticket price : ";
                                    cin >> TicketPrice_Array[i];
                                    cout << " Enter Event ID : ";
                                    cin.ignore();
                                    getline(cin, EventID_Array[i]);
                                    cout << " Enter Remaining Seats : ";
                                    cin >> RemainingSeats_Array[i];
                                    cout << " Enter Free Facilites : ";
                                    cin.ignore();
                                    getline(cin, FreeThings_Array[i]);
                                    break;
                                }
                            }
                        }
                        else if (admin_option == "4")
                        {
                            // Code for deleting record
                            cout << " Enter the event name you want to delete record of : ";
                            string name;
                            cin.ignore();
                            getline(cin, name);
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (EventName_Array[i] == name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                EventName_Array[found_index] = "";
                                EventDates_Array[found_index] = "";
                                TotalSeats_Array[found_index] = 0;
                                TicketPrice_Array[found_index] = 0;
                                EventID_Array[found_index] = "";
                                RemainingSeats_Array[found_index] = 0;
                                FreeThings_Array[found_index] = "";
                                cout << " REcord of " << name << " Deleted " << endl;
                            }
                            else
                            {
                                cout << " Record not found " << endl;
                            }
                        }
                        else if (admin_option == "5")
                        {
                            // code for updating record of any event
                            cout << " Enter the name you want to update record of : ";
                            string name;
                            cin.ignore();
                            getline(cin, name);
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (EventName_Array[i] == name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << " The Old Record of this event is : " << endl;
                                cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                                cout << "Event_ID\t Event_Name\t\t Event_Date\t Total_seats\t Ticket_Price\t  REmaining_Seats\t Free_Facilities " << endl;
                                cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                                cout << EventID_Array[found_index] << "\t\t " << EventName_Array[found_index] << "\t\t " << EventDates_Array[found_index] << "\t\t "
                                     << TotalSeats_Array[found_index] << "\t\t " << TicketPrice_Array[found_index] << "\t\t " << RemainingSeats_Array[found_index]
                                     << "\t\t " << FreeThings_Array[found_index] << endl;
                                cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

                                cout << " Enter new record " << endl;
                                cout << " Enter New Event Name : ";
                                string name;
                                cin.ignore();
                                getline(cin, name);
                                cout << " Enter date for this new event : ";
                                string date;
                                getline(cin, date);
                                cout << " Enter total number of seats for it : ";
                                int total_seats;
                                cin >> total_seats;
                                cout << " Enter Ticket price : ";
                                int price;
                                cin >> price;
                                cout << " Enter Event ID : ";
                                string ID;
                                cin.ignore();
                                getline(cin, ID);
                                cout << " Enter Remaining Seats : ";
                                int r_seats;
                                cin >> r_seats;
                                cout << " Enter Free Facilites : ";
                                string facility;
                                cin.ignore();
                                getline(cin, facility);
                                EventName_Array[found_index] = name;
                                EventDates_Array[found_index] = date;
                                TotalSeats_Array[found_index] = total_seats;
                                TicketPrice_Array[found_index] = price;
                                EventID_Array[found_index] = ID;
                                RemainingSeats_Array[found_index] = r_seats;
                                FreeThings_Array[found_index] = facility;
                            }
                        }
                        else if (admin_option == "6")
                        {
                            // code for generating or showing report of all events
                            for (int i = 0; i < index; i++)
                            {
                                int booked = TotalSeats_Array[i] - RemainingSeats_Array[i];
                                int revenue = booked * TicketPrice_Array[i];

                                cout << "Event: " << EventName_Array[i] << "\t";
                                cout << "Booked Seats: " << booked << "\t";
                                cout << "Revenue: " << revenue << "\t" << endl;
                            }
                        }
                        else if (admin_option == "7")
                        {
                            // code for Veiwing Customers
                            cout << " Customers Name : " << endl;
                            for (int i = 0; i < booking_index; i++)
                            {
                                cout << CustomerName_Array[i] << endl;
                            }
                        }
                        else if (admin_option == "8")
                        {
                            // code for veiwing bookings
                            for (int i = 0; i < booking_index; i++)
                            {
                                cout << " Cutomer Name : " << CustomerName_Array[i] << "\t" << " Event : " << BookingEvent_Array[i] << "\t" << " Seats : "
                                     << BookingSeats_Array[i] << "\t" << " Bill : " << BookingBill_Array[i] << endl;
                            }
                        }
                        else if (admin_option == "9")
                        {
                            // code for swapping according to Ticket prices
                            for (int i = 0; i < index - 1; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (TicketPrice_Array[i] < TicketPrice_Array[j])
                                    {
                                        int temp_price = TicketPrice_Array[i];
                                        TicketPrice_Array[i] = TicketPrice_Array[j];
                                        TicketPrice_Array[j] = temp_price;

                                        string temp_name = EventName_Array[i];
                                        EventName_Array[i] = EventName_Array[j];
                                        EventName_Array[j] = temp_name;

                                        string temp_date = EventDates_Array[i];
                                        EventDates_Array[i] = EventDates_Array[j];
                                        EventDates_Array[j] = temp_date;

                                        string temp_id = EventID_Array[i];
                                        EventID_Array[i] = EventID_Array[j];
                                        EventID_Array[j] = temp_id;

                                        int temp_total = TotalSeats_Array[i];
                                        TotalSeats_Array[i] = TotalSeats_Array[j];
                                        TotalSeats_Array[j] = temp_total;

                                        int temp_remaining = RemainingSeats_Array[i];
                                        RemainingSeats_Array[i] = RemainingSeats_Array[j];
                                        RemainingSeats_Array[j] = temp_remaining;

                                        string temp_free = FreeThings_Array[i];
                                        FreeThings_Array[i] = FreeThings_Array[j];
                                        FreeThings_Array[j] = temp_free;
                                    }
                                }
                            }

                            cout << "Events sorted by highest ticket price" << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "Event_ID\t Event_Name\t\t Event_Date\t Total_seats\t Ticket_Price\t  REmaining_Seats\t Free_Facilities " << endl;
                            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (EventName_Array[i] != "")
                                {
                                    cout << EventID_Array[i] << "\t\t " << EventName_Array[i] << "\t\t " << EventDates_Array[i] << "\t\t "
                                         << TotalSeats_Array[i] << "\t\t " << TicketPrice_Array[i] << "\t\t " << RemainingSeats_Array[i]
                                         << "\t\t " << FreeThings_Array[i] << endl;
                                }
                            }
                            cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                        }
                        else if (admin_option == "10")
                        {
                            break;
                        }
                        else
                        {
                            cout << " You Selected wrong option " << endl;
                        }
                        cout << "Press any key to continue..." << endl;
                        getch();
                    }
                    cout << " press any key to continue.... " << endl;
                    getch();
                }
                else
                {
                    cout << " Username and password is invalid " << endl;
                }
                cout << " Press any key to continue...";
                getch();
                break;
            }
        }
        else if (user_option == "2")
        {
            while (true)
            {
                // code for the customers
                system("cls");
                cout << "******************************************************" << endl;
                cout << "-------- Welcome To EMS Customer Menu --------" << endl;
                cout << " 1- Veiw Events " << endl;
                cout << " 2- Book Tickets " << endl;
                cout << " 3- Generate Ticket " << endl;
                cout << " 4- Search Event " << endl;
                cout << " 5- Cancel seats " << endl;
                cout << " 6- Give Your Feedback " << endl;
                cout << " 7- View Event Facilities " << endl;
                cout << " 8- Logout" << endl;
                cout << "*******************************************************" << endl
                     << endl;
                cout << " Enter your choice : " << endl;
                string customer_option;
                cin >> customer_option;
                cout << endl
                     << " You Choose the Option : " << customer_option << endl;

                if (customer_option == "1")
                {
                    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "Event_ID\t Event_Name\t\t Event_Date\t Total_seats\t Ticket_Price\t  REmaining_Seats\t Free_Facilities " << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (EventName_Array[i] != "")
                        {
                            cout << EventID_Array[i] << "\t\t " << EventName_Array[i] << "\t\t " << EventDates_Array[i] << "\t\t "
                                 << TotalSeats_Array[i] << "\t\t " << TicketPrice_Array[i] << "\t\t " << RemainingSeats_Array[i]
                                 << "\t\t " << FreeThings_Array[i] << endl;
                        }
                    }
                    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                }
                else if (customer_option == "2")
                {
                    cout << " Enter your Name : ";
                    cin.ignore();
                    getline(cin, customer_name);

                    cout << " Available Events : " << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (EventName_Array[i] != "")
                        {
                            cout << EventName_Array[i] << endl;
                        }
                    }
                    cout << " Select Event Name : ";
                    getline(cin, event_name);
                    cout << " Enter no of seats you want to reserve : ";
                    cin >> seats;
                    bool found = false;
                    int found_index = -1;
                    for (int i = 0; i < index; i++)
                    {
                        if (EventName_Array[i] == event_name)
                        {
                            found = true;
                            found_index = i;
                            break;
                        }
                    }
                    if (found == true)
                    {
                        if (seats <= RemainingSeats_Array[found_index])
                        {
                            RemainingSeats_Array[found_index] -= seats;
                            total_price = TicketPrice_Array[found_index] * seats;

                            CustomerName_Array[booking_index] = customer_name;
                            BookingEvent_Array[booking_index] = event_name;
                            BookingSeats_Array[booking_index] = seats;
                            BookingBill_Array[booking_index] = total_price;

                            booking_index++;
                            cout << " Ticket booked successfully " << endl;
                        }
                        else
                        {
                            cout << " Not enough seats available " << endl;
                        }
                    }
                    else
                    {
                        cout << " Event not found " << endl;
                    }
                }
                else if (customer_option == "3")
                {
                        cout << " Enter customer name : ";
                        cin.ignore();
                        getline(cin, customer_name);

                        cout << " Generating your ticket please wait... " << endl;

                        bool found = false;
                        int found_index = -1;

                        for (int i = 0; i < booking_index; i++)
                        {
                            if (CustomerName_Array[i] == customer_name)
                            {
                                found_index = i;
                                found = true;
                            }
                        }

                        if (found == true)
                        {
                            int event_index = -1;

                            for (int i = 0; i < index; i++)
                            {
                                if (EventName_Array[i] == BookingEvent_Array[found_index])
                                {
                                    event_index = i;
                                }
                            }

                            cout << " Your Ticket " << endl;
                            cout << "*********************************************************************************************************************************************************************************" << endl
                                 << endl;
                            cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << "Customer_Name\t Event_Name\t\t Event_ID\t event_Date\t No_of_Seats\t Ticket_Price\t Total_Price\t Free Facilties " << endl;
                            cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

                            cout << CustomerName_Array[found_index] << "\t "
                                 << EventName_Array[event_index] << "\t\t "
                                 << EventID_Array[event_index] << "\t\t "
                                 << EventDates_Array[event_index] << "\t\t "
                                 << BookingSeats_Array[found_index] << "\t\t "
                                 << TicketPrice_Array[event_index] << "\t\t "
                                 << BookingBill_Array[found_index] << "\t\t "
                                 << FreeThings_Array[event_index]
                                 << endl
                                 << endl;

                            cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl
                                 << endl;
                            cout << "*********************************************************************************************************************************************************************************" << endl;
                        }
                        else
                        {
                            cout << " Booking not found " << endl;
                        }

                        cout << " Press any key to Continue..... " << endl;
                        getch();
                }
                else if (customer_option == "4")
                {
                    // code for search Event by name
                    cout << " Enter Event name you want to search : ";
                    string name;
                    cin.ignore();
                    getline(cin, name);
                    bool found = false;
                    int found_index = -1;
                    for (int i = 0; i < index; i++)
                    {
                        if (EventName_Array[i] == name)
                        {
                            found_index = i;
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << " Record not found " << endl;
                    }
                    else
                    {
                        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << "Event_ID\t Event_Name\t\t Event_Date\t Total_seats\t Ticket_Price\t  REmaining_Seats\t Free_Facilities " << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << EventID_Array[found_index] << "\t\t " << EventName_Array[found_index] << "\t\t " << EventDates_Array[found_index] << "\t\t "
                             << TotalSeats_Array[found_index] << "\t\t " << TicketPrice_Array[found_index] << "\t\t " << RemainingSeats_Array[found_index]
                             << "\t\t " << FreeThings_Array[found_index] << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                    }
                }
                else if (customer_option == "5")
                {
                    cout << " Enter customer name: ";
                    cin.ignore();
                    getline(cin, customer_name);

                    cout << " Enter event name: ";
                    getline(cin, event_name);

                    cout << " Enter seats to cancel: ";
                    cin >> cancel_seats;

                    bool found = false;
                    int found_index = -1;

                    for (int i = 0; i < booking_index; i++)
                    {
                        if (CustomerName_Array[i] == customer_name &&
                            BookingEvent_Array[i] == event_name)
                        {
                            found = true;
                            found_index = i;
                            break;
                        }
                    }

                    if (found == true)
                    {
                        RemainingSeats_Array[found_index] += cancel_seats;
                        BookingSeats_Array[found_index] -= cancel_seats;
                        BookingBill_Array[found_index] = BookingSeats_Array[found_index] * TicketPrice_Array[found_index];

                        cout << " Ticket cancelled successfully " << endl;
                    }
                    else
                    {
                        cout << " Booking not found " << endl;
                    }
                }
                else if (customer_option == "6")
                {
                    // code for feedback
                    string feedback;
                    cin.ignore();
                    getline(cin, feedback);
                    cout << endl
                         << " Your FeedBack : " << endl;
                    cout << "***********************************************************************************************************************" << endl;
                    cout << feedback << endl;
                    cout << "***********************************************************************************************************************" << endl;
                    cout << " Thanks For Giving Your FeedBAck " << endl;
                }
                else if (customer_option == "7")
                {
                    cout << "Event Name\t\t Free Facilities" << endl
                         << endl;

                    for (int i = 0; i < index; i++)
                    {
                        cout << EventName_Array[i] << "\t\t "
                             << FreeThings_Array[i] << endl
                             << endl;
                    }
                }
                else if (customer_option == "8")
                {
                    break;
                }
                cout << " Press any key to continue.... " << endl;
                getch();
            }
        }
        else if (user_option == "3")
        {
            break;
        }
        else
        {
            cout << " You entered wrong option " << endl;
        }
        cout << " Press any key to continue...." << endl;
        getch();
    }
    // end of main while loop
    cout << " Thank you for using our system ! " << endl;
}