#include<iostream>

using namespace std;

int symmetric(int num);

int main()
{
    int num;
    cout<<" Enter a three-digit number : ";
    cin>>num;
     
    symmetric(num);
    return 0;

}
int symmetric(int num)
{
    int inverse = num / 10;
    int inverse2 = inverse / 10;
    int mod = num % 10;
    if( inverse2 == mod )
    {
        cout<<" The number is symmertical . ";
    }
    else
    {
        cout<<" The number is not symmertical . ";
    }
}
