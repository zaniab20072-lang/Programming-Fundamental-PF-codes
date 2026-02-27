#include<iostream>
using namespace std;

main(){

  cout<<" Enter the movie name :";
  string name;
  cin>>name;
  cout<<" Enter the adult ticket price : $";
  int adultTicket;
  cin>>adultTicket;
  cout<<" Enter the child ticket price : $";
  int childTicket;
  cin>>childTicket;
  cout<<" Enter the number of adult tickets sold : ";
  int A_sold;
  cin>>A_sold;
  cout<<" Enter the number of child tickets sold : ";
  int C_sold;
  cin>>C_sold;
  cout<<" Enter the percentage of amount to be donated to charity : ";
  int per;
  cin>>per;
  cout<<" ------------------------------------------ "<<endl<<endl;
  cout<<" Movie : "<<name<<endl;
  int total;
  total = (adultTicket * A_sold) + (childTicket * C_sold);
  cout<<" Total amount generated from ticket sales : $"<<total<<endl;
  int charity;
  charity = 0.15 * total ;
  cout<<" donation to charity (15%) : $"<<charity<<endl;
  int remaining;
  remaining = total - charity ;
  cout<<" Remaining amount after donation : $"<<remaining;

}