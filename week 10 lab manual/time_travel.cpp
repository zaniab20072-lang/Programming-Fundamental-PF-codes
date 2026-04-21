#include<iostream>
#include<cmath>

using namespace std;

void time(int hours, int mins );

int main()
{
    int hours, mins;
    cout<<" Enter Hours : ";
    cin>>hours;
    cout<<" Enter Minutes : ";
    cin>>mins;

    time( hours, mins );
    return 0;

}
void time(int hours, int mins )
{
    int total_mins;
    total_mins = mins + 15;
    if( total_mins >= 60)
    {
        hours ++;
        total_mins = total_mins - 60;
    }
    if( hours>= 24)
    {
        cout<<" 0"<<":"<<total_mins;
    }
    else
    {
        cout<<hours <<":" <<total_mins;
    }
}

