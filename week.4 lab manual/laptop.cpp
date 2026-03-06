#include<iostream>
using namespace std;

main()
{
    int salary=10000, laptopPrice=50000, advance=0, total=0, months=0;
    advance = ( ( 50 / 100 ) * 10000 ) ;
    total = advance * 6 ;
    if( total == laptopPrice ){
        cout<<" you can buy laptop ";
    }
    if( total != laptopPrice ){
        months = laptopPrice / advance  ;
        cout<<" Months required : "<<months;
    }
}