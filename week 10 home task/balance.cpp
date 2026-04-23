#include<iostream>
using namespace std;

float Balance(float balance, int years);

main()
{
    float balance;
    int years;
    cout<<" Enter balance and years : "<<endl;
    cin>>balance >>years;
    float updated_balance =Balance(balance, years)  ;
    cout<<" Updated Balance : "<<updated_balance;
}
float Balance(float balance, int years)
{
    float rate;
    if(balance < 10000)
    {
        rate = 5;
    }
    if( balance >= 10000 && balance <= 50000)
    {
        rate = 7;
    }
    if( balance > 50000 )
    {
        rate = 10;
    }
    if( years >= 3)
    {
        rate = rate + 2;
    }
        balance = balance + ((balance * rate )/100);
    return balance;
}