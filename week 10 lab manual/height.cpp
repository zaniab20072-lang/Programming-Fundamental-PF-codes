#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int distance;
    float angle;
    cout<<" Enter the distance from the base of the tree (in feet) : ";
    cin>>distance;
    cout<<" Enter the anglr of elevation (in degrees) : ";
    cin>>angle;
    float rad = angle*(M_PI/ 180.0);
    float height = distance * tan(rad);
    cout<<" The height of the tree is : "<<height <<" feet ";
    return 0;
}