#include<iostream>
using namespace std;

void modify_With_Pointer(int *p)
{
    *p = 50;
}

void modify_With_Reference( int &ref)
{
    ref = 100;
}

main()
{
    int a = 10, b = 20;
    modify_With_Pointer(&a);
    modify_With_Reference(b);

    cout<<"Value of a after pointer modification : " <<a <<endl;
    cout<<"Value of b after reference modification : " <<b <<endl;
    
}