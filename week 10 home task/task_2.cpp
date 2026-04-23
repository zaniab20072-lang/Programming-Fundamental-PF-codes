#include<iostream>
using namespace std;

float cubic_centi(int length, int width, int height );
float cubic_kilo(int length, int width, int height );
float cubic_mili(int length, int width, int height );
float cubic_metres(int length, int width, int height );

main()
{
   int length, width, height;
   cout<<" Enter lenght, width, height (in metres ) : "<<endl;
   cin>>length;
   cin>>width;
   cin>>height;
   string unit;
   cout<<" Enter output unit (metres, kilometres, centimetres, milimetres) : ";
   cin>>unit;
   if( unit == "metres" )
   {
      cout<<cubic_metres(length, width, height ) <<" cubic metres";
   }
   if( unit == " kilometres" )
   {
        cout<<cubic_kilo(length, width, height ) <<" cubic kilometres";
   }
   if( unit == "centimetres" )
   {
       cout<<cubic_centi(length, width, height ) <<" cubic centimetres";
   }
   if( unit == "milimetres" )
   {
       cout<<cubic_mili(length, width, height ) <<" cubic milimetres";
   }
   
}
float cubic_centi(int length, int width, int height )
{
    float res = ((((length* width * height)/3)/0.01)/0.01)/0.01;
    return res;
}
float cubic_kilo(int length, int width, int height )
{
    float res = (((length* width * height)/3)/0.001)*100;
    return res;
}
float cubic_mili(int length, int width, int height )
{
    float res = (((length* width * height)/3)/0.001)*100;
    return res;
}
float cubic_metres(int length, int width, int height )
{
    float res = ((length* width * height)/3);
    return res;
}