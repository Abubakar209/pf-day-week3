#include<iostream>
using namespace std;
main(){
string movie;
int adult_price;
int child_price;
int adult_ticket_sold;
int child_ticket_sold;
int donate_per;

cout<<"Enter movie Name ";
cin>>movie;

cout<<"Enter Adult ticket Price ";
cin>>adult_price;

cout<<"Enter Child ticket Price ";
cin>>child_price;

cout<<"Number of Adult ticket Sold ";
cin>>adult_ticket_sold;

cout<<"Number of Child ticket Sold ";
cin>>child_ticket_sold;

cout>>"Enter Percentage to Donate ";
cin>>donate_per;

int total_amount_gen=(adult_price*adult_ticket_sold)+(child_price*child_ticket_sold);
cout<<"total amount genrated: "<<total_amount_gen <<endl;

int amount_after_donation=total_amount_gen*0.1;
cout<<"Amount after donation: "<<amount_after_donation <<endl;




}