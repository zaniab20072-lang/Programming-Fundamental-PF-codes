#include<iostream>
using namespace std;

main()
{
    string figure;
    cout<<" The geomatric figure is : ";
    cin>>figure;

    if( figure == "square" ){
        int area, side;
        cout<<" Side : ";
        cin>>side;
        area = side * side ;
        cout<<" The area : "<<area;
    }
    if( figure == "rectangle" ){
        int length, width;
        float area;
        cout<<" Length : ";
        cin>>length;
        cout<<" width : ";
        cin>>width;
        area = length * width ;
        cout<<" The area : "<<area;
    }
    if( figure == "circle" ){
    int radius;
    float pi, area;
    pi = 3.14;
    cout<<" Radius : ";
    cin>>radius;
    area = pi *radius * radius ;
    cout<<" The area : "<<area;
    }
    if( figure == "triangle" ){
        float area, base, height;
        cout<<" Base : ";
        cin>>base;
        cout<<" Heigth : ";
        cin>>height;
        area = 0.5 * base * height ;
        cout<<"The area : "<<area;
    }
}