#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

// function for event organizer
void Show_All_Events(int &index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[]);
void Search_Event(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[]);
void Adding_New_Event(int &index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[]);
void Deleting_Event(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[]);
void Updating_Event(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[]);
void Report_of_Events(int index, string EventName_Array[], int TotalSeats_Array[], int RemainingSeats_Array[], int TicketPrice_Array[]);
void View_Customers(int booking_index, string CustomerName_Array[]);
void View_Bookings(int booking_index, string CustomerName_Array[], string BookingEvent_Array[], int BookingSeats_Array[], int BookingBill_Array[]);
void Sorting_Event(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[]);

// functions for customers
void Booking_Tickets(string &customer_name, int index, string EventName_Array[], string &event_name, int seats, int RemainingSeats_Array[], int total_price, int TicketPrice_Array[], string CustomerName_Array[], int BookingBill_Array[], string BookingEvent_Array[], int BookingSeats_Array[], int &booking_index, string EventID_Array[], string EventDates_Array[], int TotalSeats_Array[], string FreeThings_Array[]);
void Generate_Tickets(string CustomerName_Array[], string EventName_Array[], string EventID_Array[], string EventDates_Array[], int BookingSeats_Array[], int TicketPrice_Array[], int BookingBill_Array[], string FreeThings_Array[], string BookingEvent_Array[], int index, string &customer_name, int &booking_index);
void Cancel_Seats(int index, string EventName_Array[], int RemainingSeats_Array[], int BookingSeats_Array[], int BookingBill_Array[], int TicketPrice_Array[], int cancel_seats, string CustomerName_Array[], string BookingEvent_Array[], string &customer_name, string &event_name, int &booking_index);
void Free_Facilities(int index, string EventName_Array[], string FreeThings_Array[]);

// function for files 
void Save_Events(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[]);
void Load_Events(int &index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[]);
void Save_Bookings(int booking_index, string CustomerName_Array[], string BookingEvent_Array[], int BookingSeats_Array[], int BookingBill_Array[]);
void Load_Bookings(int &booking_index, string CustomerName_Array[], string BookingEvent_Array[], int BookingSeats_Array[], int BookingBill_Array[]);
void View_Feedback();

main()
{
    int total_events = 1000; // total size
    int index = 8;

    // data structures

    string EventName_Array[total_events] = {"Music Concert", "Comedy Show", "Food Festival", "Art Exhibition",
                                            "Fashion Show", "Movie Premiere", "Cultural Night", "Business Conference"};
    string EventDates_Array[total_events] = {"20-Apr-2026", "22-Apr-2026", "25-Apr-2026", "28-Apr-2026", "30-Apr-2026",
                                             "03-May-2026", "06-May-2026", "08-May-2026"};
    string EventID_Array[total_events] = {"E101", "E102", "E103", "E104", "E105", "E106", "E107", "E108"};
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

    // inserting a file here for saving arrays data in file

    fstream check("events.txt", ios::in);
    if (check.peek() == EOF)
    {
        Save_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
    }
    check.close();

    Load_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
    Load_Bookings(booking_index, CustomerName_Array, BookingEvent_Array, BookingSeats_Array, BookingBill_Array);

    // CURD create, read, update, delete
    while (true)
    {
        // main header

        system("cls");
        cout << "---------------------------------------------------------------------" << endl;
        cout << "--------------------- Event Management System -----------------------" << endl;
        cout << "---------------------------------------------------------------------" << endl
             << endl;

        cout << "  Main Menu : " << endl;
        cout << " 1- Event Organizer " << endl;
        cout << " 2- Customer " << endl;
        cout << " 3- To Exit " << endl;

        cout << " Choose option : ";
        string user_option;
        cin >> user_option;

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
                        cout << "*******************************************" << endl;
                        cout << "******** Menu For Event Oraganizer ********" << endl
                             << endl;
                        cout << " 1- Show All Events " << endl;
                        cout << " 2- Search Event " << endl;
                        cout << " 3- Add Event " << endl;
                        cout << " 4- Delete Event " << endl;
                        cout << " 5- Update Record of Event " << endl;
                        cout << " 6- Report of Events " << endl;
                        cout << " 7- Veiw Customers " << endl;
                        cout << " 8- View Bookings " << endl;
                        cout << " 9- Sort Events By Highest Price " << endl;
                        cout << " 10- View feedbacks of Customers " << endl;
                        cout << " 11- Logout " << endl
                             << endl;
                        cout << "*******************************************" << endl;
                        cout << " Choose option : ";
                        string admin_option;
                        cin >> admin_option;

                        if (admin_option == "1")
                        {
                            // code for, show all events record , we call a function for it
                            Show_All_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
                        }
                        else if (admin_option == "2")
                        {
                            // code for search Event by name , we call it's function
                            Search_Event(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
                        }
                        else if (admin_option == "3")
                        {
                            // code for Add Event , calling 2 functions here
                            cout << " The Old Record " << endl;
                            Show_All_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
                            cout << endl;
                            Adding_New_Event(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
                        }
                        else if (admin_option == "4")
                        {
                            // Code for deleting record, calling a fucntion
                            Deleting_Event(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
                        }
                        else if (admin_option == "5")
                        {
                            // code for updating record of any event, we call function
                            Updating_Event(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
                        }
                        else if (admin_option == "6")
                        {
                            // code for generating or showing report of all events, calling report function
                            Report_of_Events(index, EventName_Array, TotalSeats_Array, RemainingSeats_Array, TicketPrice_Array);
                        }
                        else if (admin_option == "7")
                        {
                            // code for Veiwing Customers, calling function for it
                            View_Customers(booking_index, CustomerName_Array);
                        }
                        else if (admin_option == "8")
                        {
                            // code for veiwing bookings, calling a function
                            View_Bookings(booking_index, CustomerName_Array, BookingEvent_Array, BookingSeats_Array, BookingBill_Array);
                        }
                        else if (admin_option == "9")
                        {
                            // code for swapping according to Ticket prices, calling swapping function
                            Sorting_Event(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);

                            cout << "Events sorted by highest ticket price : " << endl
                                 << endl;
                            Show_All_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
                        }
                        else if (admin_option == "10")
                        {
                            // code for viewing feedback, calling feedback function
                            View_Feedback();
                        }
                        else if (admin_option == "11")
                        {
                            break; // here admin loging out
                        }
                        else
                        {
                            cout << " You Selected wrong option " << endl;
                        }
                        cout << endl
                             << "Press any key to continue..." << endl;
                        getch();
                    }
                    cout << endl
                         << " press any key to continue.... " << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << " Username and password is invalid " << endl;
                }
                cout << " Press any key to continue...";
                getch();
            }
        }

        else if (user_option == "2")
        {
            while (true)
            {
                // code for the customers

                system("cls");
                cout << "******************************************************" << endl;
                cout << "------------ Welcome To EMS Customer Menu ------------" << endl
                     << endl;
                cout << " 1- Veiw Events " << endl;
                cout << " 2- Book Tickets " << endl;
                cout << " 3- Generate Ticket " << endl;
                cout << " 4- Search Event " << endl;
                cout << " 5- Cancel seats " << endl;
                cout << " 6- Give Your Feedback " << endl;
                cout << " 7- View Event Facilities " << endl;
                cout << " 8- Logout" << endl
                     << endl;
                cout << "*******************************************************" << endl
                     << endl;
                cout << " Enter your choice : ";
                string customer_option;
                cin >> customer_option;

                if (customer_option == "1")
                {
                    // code for showing events, calling function
                    Show_All_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
                }
                else if (customer_option == "2")
                {
                    // code for booking tickets, calling booking function
                    Booking_Tickets(customer_name, index, EventName_Array, event_name, seats, RemainingSeats_Array, total_price, TicketPrice_Array, CustomerName_Array, BookingBill_Array, BookingEvent_Array, BookingSeats_Array, booking_index, EventID_Array, EventDates_Array, TotalSeats_Array, FreeThings_Array);
                }
                else if (customer_option == "3")
                {
                    // code for generating tickets, calling function
                    Generate_Tickets(CustomerName_Array, EventName_Array, EventID_Array, EventDates_Array, BookingSeats_Array, TicketPrice_Array, BookingBill_Array, FreeThings_Array, BookingEvent_Array, index, customer_name, booking_index);
                }
                else if (customer_option == "4")
                {
                    // code for search Event by name, calling directly a function
                    Search_Event(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
                }
                else if (customer_option == "5")
                {
                    // code for cancel setas, calling  function for it
                    Cancel_Seats(index, EventName_Array, RemainingSeats_Array, BookingSeats_Array, BookingBill_Array, TicketPrice_Array, cancel_seats, CustomerName_Array, BookingEvent_Array, customer_name, event_name, booking_index);
                }
                else if (customer_option == "6")
                {
                    // code for feedback
                    cout << endl;
                    cout << " Enter your feedback : ";
                    string feedback;
                    cin.ignore();
                    getline(cin, feedback);
                    cout << endl
                         << " Your FeedBack : " << endl;
                    cout << "***************************************************************************************************************************" << endl;
                    cout << feedback << endl;
                    cout << "***************************************************************************************************************************" << endl;
                    cout << " Thanks For Giving Your FeedBAck " << endl;

                    fstream file("feedback.txt", ios::app);
                    file << feedback << endl;
                    file.close();
                }
                else if (customer_option == "7")
                {
                    // code for viewing free facilities, call fucntion
                    Free_Facilities(index, EventName_Array, FreeThings_Array);
                }
                else if (customer_option == "8")
                {
                    break;
                }
                cout << endl
                     << " Press any key to continue.... " << endl;
                getch();
            }
        }

        else if (user_option == "3")
        {
            // loging out from the system
            break;
        }

        else
        {
            cout << " You entered wrong option " << endl;
        }
        cout << endl
             << " Press any key to continue...." << endl;
        getch();
    }

    // end of main while loop

    cout << " Thank you for using our system ! " << endl;
}

// funtion for showing alll events

void Show_All_Events(int &index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[])
{
    cout << endl
         << " Here are the details of all the Events : " << endl
         << endl;
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

// fuction to search a function

void Search_Event(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[])
{
    cout << endl
         << " Enter Event name you want to search : ";
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
            break;
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

// function to add a new event

void Adding_New_Event(int &index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[])
{
    cout << endl
         << " Enter all the details for adding new event " << endl
         << endl;
    cout << " Adding new Event " << endl;
    for (int i = index; i < index + 1; i++)
    {
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
            index++;
            break;
        }
    }
    Save_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
}

// function for deleting an event

void Deleting_Event(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[])
{
    cout << endl
         << " Enter the event name you want to delete record of : ";
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
        cout << endl;
        cout << " Record Successfully Deleted !" << endl;
    }
    else
    {
        cout << " Record not found " << endl;
    }
    Save_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
}

// function for updating an event

void Updating_Event(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[])
{
    cout << endl
         << " Enter the name you want to update record of : ";
    string search_name;
    cin.ignore();
    getline(cin, search_name);
    bool found = false;
    int found_index = -1;
    for (int i = 0; i < index; i++)
    {
        if (EventName_Array[i] == search_name)
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
        cout << endl
             << " Record Successfully Updated ! " << endl;
    }
    Save_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
}

// function for showing the reports of the event

void Report_of_Events(int index, string EventName_Array[], int TotalSeats_Array[], int RemainingSeats_Array[], int TicketPrice_Array[])
{
    cout << endl
         << " The list of Report of Events is : " << endl
         << endl;
    for (int i = 0; i < index; i++)
    {
        if (EventName_Array[i] != "")
        {
            int booked = TotalSeats_Array[i] - RemainingSeats_Array[i];
            int revenue = booked * TicketPrice_Array[i];

            cout << "Event: " << EventName_Array[i] << "\t";
            cout << "Booked Seats: " << booked << "\t";
            cout << "Revenue: " << revenue << "\t" << endl;
        }
    }
}

// function for viewing customers

void View_Customers(int booking_index, string CustomerName_Array[])
{
    cout << endl
         << " The list of our customers is : " << endl
         << endl;
    for (int i = 0; i < booking_index; i++)
    {
        cout << i + 1 << "  Customer Name : \t";
        cout << CustomerName_Array[i] << endl;
    }
}

// function for viewing bookings

void View_Bookings(int booking_index, string CustomerName_Array[], string BookingEvent_Array[], int BookingSeats_Array[], int BookingBill_Array[])
{
    cout << endl
         << " The list of our bookings is : " << endl
         << endl;
    for (int i = 0; i < booking_index; i++)
    {
        cout << " Cutomer Name : " << CustomerName_Array[i] << "\t" << " Event : " << BookingEvent_Array[i] << "\t" << " Seats : "
             << BookingSeats_Array[i] << "\t" << " Bill : " << BookingBill_Array[i] << endl;
    }
}

// function for sorting events in order of highest price of ticket

void Sorting_Event(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[])
{
    cout << endl
         << " The events are sorting in order of highest price of ticket : " << endl
         << endl;
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
    Save_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
}

// function for booking tickets

void Booking_Tickets(string &customer_name, int index, string EventName_Array[], string &event_name, int seats, int RemainingSeats_Array[], int total_price, int TicketPrice_Array[], string CustomerName_Array[], int BookingBill_Array[], string BookingEvent_Array[], int BookingSeats_Array[], int &booking_index, string EventID_Array[], string EventDates_Array[], int TotalSeats_Array[], string FreeThings_Array[])
{
    cout << endl
         << " Enter details for booking your ticket : " << endl
         << endl;
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
            cout << endl
                 << " ********* Ticket booked successfully ********* " << endl;
            cout << " Thank you for booking your ticket ! " << endl
                 << endl;
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
    Save_Bookings(booking_index, CustomerName_Array, BookingEvent_Array, BookingSeats_Array, BookingBill_Array);
    Save_Events(index, EventID_Array, EventName_Array, EventDates_Array, TotalSeats_Array, TicketPrice_Array, RemainingSeats_Array, FreeThings_Array);
}

// function for generating tickets

void Generate_Tickets(string CustomerName_Array[], string EventName_Array[], string EventID_Array[], string EventDates_Array[], int BookingSeats_Array[], int TicketPrice_Array[], int BookingBill_Array[], string FreeThings_Array[], string BookingEvent_Array[], int index, string &customer_name, int &booking_index)
{
    cout << endl
         << " We need to know your name so we can generate your recent ticket " << endl
         << endl;
    cout << " Enter customer name : ";
    cin.ignore();
    getline(cin, customer_name);

    cout << endl
         << " Generating your ticket please wait... " << endl
         << endl;

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
        cout << "Customer_Name\t Event_Name\t\t Event_ID\t event_Date\t No_of_Seats\t Ticket_Price\t Total_Price\t\t Free Facilties " << endl;
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

// function for cancel the seats

void Cancel_Seats(int index, string EventName_Array[], int RemainingSeats_Array[], int BookingSeats_Array[], int BookingBill_Array[], int TicketPrice_Array[], int cancel_seats, string CustomerName_Array[], string BookingEvent_Array[], string &customer_name, string &event_name, int &booking_index)
{
    cout << endl;
    cout << " Please enter correct details for cancelling your tickets " << endl
         << endl;
    cout << " Enter customer name: ";
    cin.ignore();
    getline(cin, customer_name);

    cout << " Enter event name: ";
    getline(cin, event_name);

    cout << " Enter seats to cancel: ";
    cin >> cancel_seats;

    bool found = false;

    int booking_found_index = -1;
    int event_found_index = -1;

    for (int i = 0; i < booking_index; i++)
    {
        if (CustomerName_Array[i] == customer_name &&
            BookingEvent_Array[i] == event_name)
        {
            found = true;
            booking_found_index = i;
            break;
        }
    }
    for (int i = 0; i < index; i++)
    {
        if (EventName_Array[i] == event_name)
        {
            event_found_index = i;
            break;
        }
    }

    if (found == true)
    {
        if (cancel_seats > BookingSeats_Array[booking_found_index])
        {
            cout << endl
                 << " You cannot cancel more seats than booked " << endl;
        }
        else
        {
            RemainingSeats_Array[event_found_index] += cancel_seats;
            BookingSeats_Array[booking_found_index] -= cancel_seats;
            BookingBill_Array[booking_found_index] = BookingSeats_Array[booking_found_index] * TicketPrice_Array[event_found_index];

            cout << endl
                 << " Ticket cancelled successfully " << endl;
        }
    }
    else
    {
        cout << " Booking not found " << endl;
    }

    Save_Bookings(booking_index, CustomerName_Array, BookingEvent_Array, BookingSeats_Array, BookingBill_Array);
}

// function for displaying free facilities

void Free_Facilities(int index, string EventName_Array[], string FreeThings_Array[])
{
    cout << endl;
    cout << " Here are the list of free facilities according to events , that we are offereing to our customers : " << endl
         << endl;
    cout << "Event Name\t\t Free Facilities" << endl
         << endl;

    for (int i = 0; i < index; i++)
    {
        cout << EventName_Array[i] << "\t\t "
             << FreeThings_Array[i] << endl;
    }
}

// function for saving events in file

void Save_Events(int index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[])
{
    fstream file("events.txt", ios::out);

    for (int i = 0; i < index; i++)
    {
        if (EventName_Array[i] != "")
        {
            file << EventID_Array[i] << endl;
            file << EventName_Array[i] << endl;
            file << EventDates_Array[i] << endl;
            file << TotalSeats_Array[i] << endl;
            file << TicketPrice_Array[i] << endl;
            file << RemainingSeats_Array[i] << endl;
            file << FreeThings_Array[i] << endl;
        }
    }

    file.close();
}

// function for loading events in files

void Load_Events(int &index, string EventID_Array[], string EventName_Array[], string EventDates_Array[], int TotalSeats_Array[], int TicketPrice_Array[], int RemainingSeats_Array[], string FreeThings_Array[])
{
    fstream file("events.txt", ios::in);
    index = 0;

    while (getline(file, EventID_Array[index]))
    {
        getline(file, EventName_Array[index]);
        getline(file, EventDates_Array[index]);
        file >> TotalSeats_Array[index];
        file.ignore();
        file >> TicketPrice_Array[index];
        file.ignore();
        file >> RemainingSeats_Array[index];
        file.ignore();
        getline(file, FreeThings_Array[index]);

        index++;
    }

    file.close();
}

// function for save booking in file

void Save_Bookings(int booking_index, string CustomerName_Array[], string BookingEvent_Array[], int BookingSeats_Array[], int BookingBill_Array[])
{
    fstream file("bookings.txt", ios::out);

    for (int i = 0; i < booking_index; i++)
    {
        file << CustomerName_Array[i] << endl;
        file << BookingEvent_Array[i] << endl;
        file << BookingSeats_Array[i] << endl;
        file << BookingBill_Array[i] << endl;
    }

    file.close();
}

// function for loading bookings in files

void Load_Bookings(int &booking_index, string CustomerName_Array[], string BookingEvent_Array[], int BookingSeats_Array[], int BookingBill_Array[])
{
    fstream file("bookings.txt", ios::in);

    booking_index = 0;

    while (getline(file, CustomerName_Array[booking_index]))
    {
        getline(file, BookingEvent_Array[booking_index]);

        file >> BookingSeats_Array[booking_index];
        file.ignore();

        file >> BookingBill_Array[booking_index];
        file.ignore();

        booking_index++;
    }

    file.close();
}

// code for veiwng feedback through file

void View_Feedback()
{
    fstream file("feedback.txt", ios::in);
    string feedback;

    cout << endl;
    cout << "************************************************ Customer Feedback *******************************************************************" << endl;
    cout << "**************************************************************************************************************************************" << endl
         << endl;

    while (getline(file, feedback))
    {
        cout << "* " << feedback << endl;
    }
    cout << endl;
    cout << "**************************************************************************************************************************************" << endl;

    file.close();
}