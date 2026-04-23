#include<iostream>
using namespace std;

void time_calculator(int needed_hours, int days, int workers);

main()
{
    int needed_hours, days, workers;
    cout<<" Enter needed hours : ";
    cin>>needed_hours;
    cout<<" Enter days : ";
    cin>>days;
    cout<<" Enter workers : ";
    cin>>workers;
    time_calculator( needed_hours, days, workers);
}
void time_calculator(int needed_hours, int days, int workers)
{
    float working_days = days - ( days * 0.10);
    int hours = 10;
    float total_hours = working_days * workers * hours;
    if( total_hours >= needed_hours)
    {
        total_hours = total_hours - needed_hours;
        cout<<" Yes! "<<total_hours <<" hours left ";
    }
    else
    {
        total_hours = needed_hours - total_hours;
        cout<<" Not enough "<<total_hours <<" needed";
    }
}