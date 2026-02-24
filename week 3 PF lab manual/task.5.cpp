#include<iostream>
using namespace std;

main(){

    cout<<" Enter the student's Name = ";
    string name;
    cin>>name;
    cout<<" Enter matriculation marks (out of 1100) : ";
    int matric;
    cin>>matric;
    cout<<" Enter intermediate marks (out of 560) : ";
    int inter;
    cin>>inter;
    cout<<" Enter ECAT marks (out of 400) : ";
    int ecat;
    cin>>ecat;
    float agg;
    agg = ((matric/1100.0) * 0.10) + ((inter/560.0) * 0.40) + ((ecat/400.0) * 0.50) ;
    cout<<" Aggregate score for "<<name<<" is = "<<agg;

} 