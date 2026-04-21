#include<iostream>

using namespace std;

int myFunction(int number);

int main()
{
    int number, result;
    cout<<" Enter a number : ";
    cin>>number;

    result = myFunction(number);
    cout<<result;
    return 0;
}
int myFunction(int number)
{
    int total;
    total = number*5;
    return total;
}
