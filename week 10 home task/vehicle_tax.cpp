#include<iostream>
using namespace std;

float vehicle_tax_M(float price, char type);
float vehicle_tax_E(float price, char type);
float vehicle_tax_S(float price, char type);
float vehicle_tax_V(float price, char type);
float vehicle_tax_T(float price, char type);


main()
{
    float price, res, total_price;
    char type;
    cout<<" Enter the type of the vehicle (M/E/S/V/T) : ";
    cin>>type;
    cout<<" Enter theprice of the vehicle : ";
    cin>>price;
    if(type == 'M')
    {
        res = vehicle_tax_M(price, type);
    }
    if( type == 'E')
    {
        res = vehicle_tax_E(price, type);
    }
    if(type == 'S')
    {
        res = vehicle_tax_S(price, type);
    }
    if(type == 'V')
    {
        res = vehicle_tax_V(price, type);
    }
    if(type == 'T')
    {
        res = vehicle_tax_T(price, type);
    }
    
    total_price = res + price;
    cout<<" The final Price of the vehicle on the type "<<type<<" with tax is : "<<total_price <<"$";

}
float vehicle_tax_M(float price, char type)
{
    float tax = price * 0.06;
    return tax;
}
float vehicle_tax_E(float price, char type)
{
    float tax = price * 0.08;
    return tax;
}
float vehicle_tax_S(float price, char type)
{
    float tax = price * 0.1;
}
float vehicle_tax_V(float price, char type)
{
    float tax = price * 0.12;
    return tax;
}
float vehicle_tax_T(float price, char type)
{
    float tax = price * 0.15;
    return tax;
}