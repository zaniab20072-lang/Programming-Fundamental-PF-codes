#include<iostream>
using namespace std;

main()
{
    int holidays, working_days, playtime, difference, hours, mins;
    
    cout<<" Holidays : ";
    cin>>holidays;
    
    working_days = 365 - holidays ;
    playtime = ( working_days * 63 ) + ( holidays * 127 );
    
    if( playtime <= 30000 ){
        difference = 30000 - playtime ;
        hours = difference / 60 ;
        mins = difference % 60 ;
        cout<<hours<<" hours and "<<mins<<" mins less for play ";
    }
    if( playtime > 30000 ){
       difference = playtime - 30000 ;
        hours = difference / 60 ;
        mins = difference % 60 ;
        cout<<hours<<" hours and "<<mins<<" mins less for play "; 
    }
}