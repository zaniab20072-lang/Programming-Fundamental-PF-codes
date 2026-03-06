#include<iostream>
using namespace std;

main()
{
  int age1, age2, age3;
  string name1, name2, name3;
  cout<<" Enter the name of first brither : ";
  cin>>name1;
  cout<<" Enter the age of first brither : ";
  cin>>age1;
  cout<<" Enter the name of second brother : ";
  cin>>name2;
 cout<<" Enter the age of second brother : ";
 cin>>age2;
 cout<<" Enter the name of third brother : ";
 cin>>name3;
 cout<<" Enter the age of third brother : ";
 cin>>age3;

 if( age1 < age2 ){
    if( age3 < age1 ){
        cout<<name1<<" is youngest ";
    }
    if( age3 < age1){
        if( age3 < age2 ){  
 cout<<name3<<" is youngest ";
        }
    }  
    }
if( age2 < age3){
    if( age2 < age1 ){
        cout<<name2<<" is youngest ";
    }
    if( age1 < age2 ){
        if( age1 < age3 ){
cout<<name1<<" is youngest ";
        }
    }
    }
 if( age3 < age1 ){
        if( age3 < age2 ){
            cout<<name3<<" is youngest ";
        }
        if( age2 < age3 ){
            if( age3 < age1 ){
cout<<name2<<" is youngest ";
            }
        }    
        }
}