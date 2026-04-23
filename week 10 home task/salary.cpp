#include<iostream>
using namespace std;

float calculate_salary( float base, int score, int experience );

main()
{
    float base, total_salary;
    int score, expereince;
    cout<<" Enter base, score and expereince in years : "<<endl;
    cin>>base >>score >>expereince;
    float bonus = calculate_salary( base, score, expereince);
    total_salary = base + bonus;

    cout<<" Final Salary : "<<total_salary;
}
float calculate_salary( float base, int score, int experience )
{
    float res;
    if( score >= 90)
    {
        res = (base * 20) / 100;
    }
    if( score <= 89 || score >= 75 )
    {
        res = (base* 10 )/ 100;
    }
    if( score < 75 )
    {
        res = (base * 5)/100;
    }
    if( experience >= 5 )
    {
        res = res + ((base * 5)/ 100);
    }
    return res;
}
