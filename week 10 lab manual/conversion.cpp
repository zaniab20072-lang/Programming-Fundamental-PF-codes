#include <iostream>
using namespace std;

void conversion(int num);

main()
{
    int num;
    cout << " Number 1 to 100 : ";
    cin >> num;
    conversion(num);
}
void conversion(int num)
{
    if (num <= 100)
    {
        if (num == 10)
        {
            cout << " Ten ";
        }
        if (num == 11)
        {
            cout << " Eleven ";
        }
        if (num == 12)
        {
            cout << " Twelve ";
        }
        if (num == 13)
        {
            cout << " Thirteen ";
        }
        if (num == 14)
        {
            cout << " Fourteen ";
        }
        if (num == 15)
        {
            cout << " Fifteen ";
        }
        if (num == 16)
        {
            cout << " Sixteen ";
        }
        if (num == 17)
        {
            cout << " Seventeen ";
        }
        if (num == 18)
        {
            cout << " Eighteen ";
        }
        if (num == 19)
        {
            cout << " Ninteen ";
        }
        int n = num / 10;
        if (n == 2)
        {
            cout << " Twenty ";
        }
        if (n == 3)
        {
            cout << " Thirty ";
        }
        if (n == 4)
        {
            cout << " Forty ";
        }
        if (n == 5)
        {
            cout << " Fifty ";
        }
        if (n == 6)
        {
            cout << " Sixty ";
        }
        if (n == 7)
        {
            cout << " Seventy ";
        }
        if (n == 8)
        {
            cout << " Eighty ";
        }
        if (n == 9)
        {
            cout << " Ninty ";
        }
        if (num == 100)
        {
            cout << " Hundred ";
        }
    }
    if (num < 10 || num > 20)
    {
        num = num % 10;
        if (num == 1)
        {
            cout << " One ";
        }
        if (num == 2)
        {
            cout << " Two ";
        }
        if (num == 3)
        {
            cout << " Three ";
        }
        if (num == 4)
        {
            cout << " Four ";
        }
        if (num == 5)
        {
            cout << " Five ";
        }
        if (num == 6)
        {
            cout << " Six ";
        }
        if (num == 7)
        {
            cout << " Seven ";
        }
        if (num == 8)
        {
            cout << " Eight ";
        }
        if (num == 9)
        {
            cout << " Nine ";
        }
    }
}